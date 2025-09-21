@class OS_dispatch_queue, LACCompanionAuthenticationEnvironment;
@protocol LACEligibilityHelping, LACSharingManaging;

@interface LACPhoneIntegrationEnvironmentProvider : NSObject <LACCompanionAuthenticationEnvironmentProviding>

@property (nonatomic, readonly) id<LACEligibilityHelping> eligibilityHelper;
@property (nonatomic, readonly) id<LACSharingManaging> sharingManager;
@property (nonatomic, readonly) OS_dispatch_queue *workQueue;
@property (nonatomic) BOOL hasPairedDevices;
@property (nonatomic) void *subscription;
@property (nonatomic, readonly) BOOL isFeatureAvailable;
@property (nonatomic, readonly) LACCompanionAuthenticationEnvironment *environment;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEligibilityHelper:(id)a0 sharingManager:(id)a1 workQueue:(id)a2;

@end
