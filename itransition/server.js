const http = require('http');

http.createServer((req, res) => {
    const url = new URL(req.url, 'http://localhost');
    
    if (url.pathname !== '/thesamecrone_gmail_com') {
        res.writeHead(404);
        return res.end('Not Found');
    }

    const paramX = url.searchParams.get('x');
    const paramY = url.searchParams.get('y');

    if (!paramX || !paramY || isNaN(paramX) || isNaN(paramY)) {
        res.writeHead(200);
        return res.end('NaN');
    }

    if (paramX.includes('.') || paramY.includes('.') || parseInt(paramX) <= 0 || parseInt(paramY) <= 0) {
        res.writeHead(200);
        return res.end('NaN');
    }

    try {
        let a = BigInt(paramX);
        let b = BigInt(paramY);
        let num = a * b;

        while (b !== 0n) {
            let temp = b;
            b = a % b;
            a = temp;
        }

        res.writeHead(200);
        res.end((num / a).toString());
    } catch (e) {
        res.writeHead(200);
        res.end('NaN');
    }
}).listen(process.env.PORT || 3000, '0.0.0.0', () => {
    console.log("Server is listening");
});