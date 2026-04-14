@class NSString;

@interface IMDCommunicationTrustManager : NSObject <IMDCommunicationTrustManaging>

@property (class, nonatomic, readonly) IMDCommunicationTrustManager *sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)requestDecisionForSender:(NSString *)a0 completion:(void (^)(long long))a1;

@end
