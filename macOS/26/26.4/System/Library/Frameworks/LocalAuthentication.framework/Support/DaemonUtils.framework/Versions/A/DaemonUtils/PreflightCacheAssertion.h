@class NSString, PreflightCache;

@interface PreflightCacheAssertion : NSObject

@property (copy, nonatomic) NSString *reason;
@property (readonly, weak, nonatomic) PreflightCache *cache;

- (void)drop;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithReason:(id)a0 cache:(id)a1;

@end
