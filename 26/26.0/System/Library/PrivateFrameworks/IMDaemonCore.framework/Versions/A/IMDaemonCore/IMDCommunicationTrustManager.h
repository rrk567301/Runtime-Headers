@class NSString;

@interface IMDCommunicationTrustManager : NSObject

@property (class, nonatomic, readonly) IMDCommunicationTrustManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)requestDecisionForSender:(NSString *)a0 completion:(void (^)(long long))a1;

@end
