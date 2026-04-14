@class NSString, NSNumber, NSXPCConnection;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC>

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNumber *transactionToken;

- (void)setServerToTest:(long long)a0;
- (id)initWithConnection:(id)a0 bundleID:(id)a1 transactionID:(id)a2;
- (void).cxx_destruct;
- (void)setStocksAdEnabled:(BOOL)a0;
- (BOOL)_isAppTrackingAuthorized;
- (void)requestAttributionDetails:(id /* block */)a0;
- (void)requestAttributionDetailsWithBlock:(id /* block */)a0;
- (void)beginAttributionRequest:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;

@end
