@class TapToRadarService;

@interface HMMTapToRadarShim : NSObject <HMMTapToRadarShimProtocol>

@property (class, readonly, nonatomic) HMMTapToRadarShim *sharedInstance;

@property (readonly, nonatomic) TapToRadarService *tapToRadarService;
@property (readonly, nonatomic) BOOL isTapToRadarServiceAuthorized;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (void)createDraft:(id)a0 forProcessNamed:(id)a1 withDisplayReason:(id)a2;
- (id)createRadarComponentWithName:(id)a0 version:(id)a1 identifier:(long long)a2;
- (id)createRadarDraft;

@end
