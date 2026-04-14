@interface ICThumbnailCache : NSObject <ICThumbnailCaching> {
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ persistedCache;
    void /* unknown type, empty encoding */ workerContext;
    void /* unknown type, empty encoding */ cacheKeyQueue;
    void /* unknown type, empty encoding */ objectIdentifiersToCacheKeys;
}

@property (class, nonatomic, readonly) ICThumbnailCache *shared;

- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)invalidateForObjectIdentifiers:(id)a0;
- (id)creationDateFor:(id)a0;

@end
