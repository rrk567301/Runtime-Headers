@class PKLRUCache;

@interface PKLocalStrokeTracker : NSObject {
    PKLRUCache *_lruCache;
}

@property (readonly, nonatomic) long long strokeLimit;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)addStroke:(id)a0;
- (BOOL)isRecentlyCreatedLocalStroke:(id)a0;

@end
