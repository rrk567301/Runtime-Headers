@class NSArray, NSURLSession;

@interface ICQNetworkRequestController : NSObject {
    NSURLSession *_session;
    NSArray *_numberOfSecondsBetweenRetries;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)initWithSession:(id)a0 numberOfSecondsBetweenRetries:(id)a1;
- (void)executeRequest:(id)a0 acceptedStatusCodes:(id)a1 completion:(id /* block */)a2;

@end
