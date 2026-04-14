@class AFSiriAvailability, NSObject;
@protocol OS_dispatch_queue;

@interface AFSystemAssistantExperienceStatusManager : NSObject

@property BOOL deviceSupportsSAE;
@property BOOL saeEnabled;
@property BOOL saeAvailable;
@property BOOL swaiEnabled;
@property BOOL visualIntelligenceEnabled;
@property (retain) AFSiriAvailability *siriAvailability;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;

+ (id)sharedManager;
+ (BOOL)isSAEEnabled;
+ (BOOL)saeAvailable;
+ (BOOL)ust_swaiEnabled;
+ (BOOL)_isExpensiveNetwork;
+ (id)_outOfSpaceSubscribers;
+ (BOOL)deviceSupportsSAE;
+ (BOOL)isVisualIntelligenceEnabled;
+ (id)maxRequiredStorageInBytesForAssets;
+ (id)maxRequiredStorageInBytesForAssets:(BOOL)a0;
+ (void)reasonAssetsAreMissing:(id /* block */)a0;
+ (id)siriAvailability;
+ (id)subscribersForUAF;
+ (BOOL)swaiEnabled;
+ (BOOL)ust_deviceSupportsSAE;
+ (BOOL)ust_saeEnabled;

- (void).cxx_destruct;
- (id)init;
- (void)fetchGenerativeModelsAvailability;
- (id)fetchSiriAvailability;

@end
