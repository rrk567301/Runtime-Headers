@class NSDictionary, _TtC9Calculate22StocksKitCurrencyCache;

@interface Calculate.StocksKitCurrencyCache : NSObject

@property (class, nonatomic, readonly) _TtC9Calculate22StocksKitCurrencyCache *shared;
@property (class, nonatomic, readonly) char isEnabled;

@property (nonatomic, readonly) char needsRefresh;
@property (nonatomic, readonly) NSDictionary *currencyData;

- (id)init;
- (void).cxx_destruct;
- (char)refreshSynchronously;
- (char)refreshSynchronouslyWithTimeout:(double)a0;
- (void)refreshWithCompletionHandler:(void (^)(BOOL))a0;
- (void)refreshWithTimeout:(double)a0 completionHandler:(void (^)(BOOL))a1;

@end
