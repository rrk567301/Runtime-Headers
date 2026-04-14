@class ACAccount, AAURLSession;
@protocol FADeviceInfoProtocol, FAURLProvider;

@interface FANetworkService : NSObject

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<FAURLProvider> urlProvider;
@property (readonly, nonatomic) AAURLSession *urlSession;
@property (readonly, nonatomic) id<FADeviceInfoProtocol> deviceInfo;

- (void).cxx_destruct;
- (id)signedRequestWithEndpoint:(id)a0 method:(id)a1 headers:(id)a2 plistBody:(id)a3;
- (id)signedRequestWithURL:(id)a0 method:(id)a1 headers:(id)a2 plistBody:(id)a3;
- (id)dataWithRequest:(id)a0;
- (id)plistWithResponse:(id)a0;
- (id)standardPlistRequestWithEndpoint:(id)a0 method:(id)a1 plistBody:(id)a2;
- (id)ensureDeviceUnlockedSinceBoot;
- (id)ensureAccount;
- (id)plistWithRequest:(id)a0;
- (id)initWithAccount:(id)a0 deviceInfo:(id)a1 urlProvider:(id)a2 urlSession:(id)a3;
- (id)signedRequestWithEndpoint:(id)a0;
- (id)signedRequestWithURL:(id)a0;
- (id)standardPlistRequestWithEndpoint:(id)a0;

@end
