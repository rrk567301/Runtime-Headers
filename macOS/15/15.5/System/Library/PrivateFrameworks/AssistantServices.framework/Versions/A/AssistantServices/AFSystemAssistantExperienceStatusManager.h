@class NSObject;
@protocol OS_dispatch_queue;

@interface AFSystemAssistantExperienceStatusManager : NSObject

@property BOOL deviceSupportsSAE;
@property BOOL saeEnabled;
@property BOOL saeAvailable;
@property BOOL swaiEnabled;
@property BOOL visualIntelligenceEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;

+ (id)sharedManager;
+ (BOOL)isSAEEnabled;
+ (BOOL)saeAvailable;
+ (BOOL)ust_swaiEnabled;
+ (BOOL)deviceSupportsSAE;
+ (BOOL)isVisualIntelligenceEnabled;
+ (BOOL)swaiEnabled;
+ (BOOL)ust_deviceSupportsSAE;
+ (BOOL)ust_saeEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)fetchGenerativeModelsAvailability;

@end
