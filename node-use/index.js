const ffi = require("ffi-napi");
const lib = new ffi.Library("../libhello/build/libhello.so", {
  // 函数
  returnSomeValue: ["int", ["int"]],
});
const value = lib.returnSomeValue(123);
console.log(`value`, value);
