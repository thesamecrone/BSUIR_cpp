const a = process.argv.slice(2);
let s = a[0] || "";
let r = '';
for (let i = 0; i < s.length; i++) {
    for (let j = i + 1; j <= s.length; j++) {
        let c = s.slice(i, j);
        r = a.every(o => o.includes(c)) && c.length > r.length ? c : r;
    }
}
console.log(r);