@class NSObject;
@protocol OS_dispatch_queue;

@interface AFSystemAssistantExperienceStatusManager : NSObject

@property char deviceSupportsSAE;
@property char saeEnabled;
@property char saeAvailable;
@property char swaiEnabled;
@property char visualIntelligenceEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;

+ (id)sharedManager;
+ (char)isSAEEnabled;
+ (char)saeAvailable;
+ (char)ust_swaiEnabled;
+ (char)deviceSupportsSAE;
+ (char)isVisualIntelligenceEnabled;
+ (char)swaiEnabled;
+ (char)ust_deviceSupportsSAE;
+ (char)ust_saeEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)fetchGenerativeModelsAvailability;

@end
