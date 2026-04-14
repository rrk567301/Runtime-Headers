@class NSCache;

@interface PUInMemoryLimitedImageTable : PUTemporaryImageTable {
    NSCache *_memoryCache;
}

- (void)removeItemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)imageForItemAtIndex:(unsigned long long)a0;
- (void)setImage:(id)a0 forItemAtIndex:(unsigned long long)a1;

@end
