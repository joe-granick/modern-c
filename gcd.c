size_t gcd2(size_t a, size_t b) {
  assert(a <= b);
  if(!a) return b;
  size_t rem = b % a;
  return gcd2(rem, a);
}
