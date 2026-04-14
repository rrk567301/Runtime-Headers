@class HMServiceClient, NSObject;
@protocol OS_dispatch_queue;

@interface PAHMSManager : NSObject

@property (retain, nonatomic) HMServiceClient *hmsClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hmsQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)sendConfigUpdate:(id)a0 forIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (void)setupHearingModeService;

@end
