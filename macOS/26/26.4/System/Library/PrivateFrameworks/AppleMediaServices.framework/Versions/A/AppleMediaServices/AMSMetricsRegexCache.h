@class NSLock;

@interface AMSMetricsRegexCache : NSObject <AMSMetricsRegexCacheProtocol> {
    void /* unknown type, empty encoding */ cache;
}

@property (nonatomic, readonly) unsigned int maxSize;
@property (nonatomic, readonly) NSLock *lock;

- (id)initWithMaxSize:(unsigned int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)evictLRU;
- (id)getRegexFor:(id)a0;
- (void)setRegex:(id)a0 for:(id)a1;

@end
