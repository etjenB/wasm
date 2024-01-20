let arr = []
console.time('Create random array');
for (let index = 0; index < 10000000; index++) {
    arr[index] = Math.floor(Math.random * 1e6);
}
console.timeEnd('Create random array');
console.time('Sort random array');

arr.sort((a, b) => a - b);
console.timeEnd('Sort random array');