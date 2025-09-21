@interface ADAttribution : NSObject

@property (nonatomic) char hasCompletedResponse;
@property (nonatomic) unsigned char numRetries;

+ (id)sharedInstance;

- (id)init;
- (void)initiateRequestOnConnection:(id)a0 withBlock:(id /* block */)a1;
- (void)requestAttributionDetailsWithBlock:(id /* block */)a0;
- (void)setServerToTest:(long long)a0;
- (void)setStocksAdEnabled:(char)a0;

@end
