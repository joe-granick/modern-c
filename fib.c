
/* cache is added in this implementation to store numbers once encountered
 * this allows cutting offf recursive calls forf redundant branches
 */

size_t fibCacheRec(size_t n, size_t cache[n]){

  if (!cache[n-1]){
    cache[n-1] 
      = fibCacheRec(n-1,cache) + fibCacheRec(n-2, cache);
  }
  return cache[n-1];

}

size_t fibCache(size_t n) {
  if (n+1 <= 3) return 1;

  size_t cache[n];

  // fibonacci seuqence begins 1,1 initialize first to value in cache w/ 1
  cache[0] = 1; cache[1] = 1;

  //initialize cache value to 0 for rest of values
  for (size_t i = 2; i < n; i++)
    cache[i] = 0;
    return fibCacheRec(n, cache)
}
