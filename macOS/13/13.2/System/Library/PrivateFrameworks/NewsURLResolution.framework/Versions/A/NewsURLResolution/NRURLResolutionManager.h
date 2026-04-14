@protocol NRBloomFilterInfoService;

@interface NRURLResolutionManager : NSObject

@property (readonly, nonatomic) id<NRBloomFilterInfoService> bloomFilterInfoService;
@property (readonly, nonatomic) BOOL userHasBundleSubscription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)createResolutionOperationForWebURL:(id)a0;
- (id)createResolutionOperationForNewsURL:(id)a0;

@end
