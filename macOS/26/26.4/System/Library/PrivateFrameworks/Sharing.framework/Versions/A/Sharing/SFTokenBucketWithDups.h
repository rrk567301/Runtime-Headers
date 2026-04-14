@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray { } *_dups;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBucket:(id)a0 dupHistoryLength:(unsigned long long)a1;
- (BOOL)acquireTokenForIdentifier:(unsigned long long)a0;
- (void)dealloc;

@end
