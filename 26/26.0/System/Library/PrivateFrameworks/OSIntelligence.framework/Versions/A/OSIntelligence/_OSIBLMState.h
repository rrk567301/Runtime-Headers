@class NSObject;
@protocol OS_dispatch_queue, _CDLocalContext;

@interface _OSIBLMState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL autoLPMEngagement;
@property (retain, nonatomic) id<_CDLocalContext> context;

+ (id)sharedInstance;
+ (id)sharedLog;
+ (id)loadNumberForPreferenceKey:(id)a0;
+ (BOOL)isIBLMDefaultOn;
+ (BOOL)isIBLMSupported;
+ (id)loadCurrentIBLMState;
+ (void)saveCurrentIBLMState:(long long)a0;
+ (void)saveNumber:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;
- (void)client:(id)a0 setIBLMState:(long long)a1;
- (BOOL)isIBLMCurrentlyEnabled;
- (void)monitorForAutoLPM;
- (BOOL)willEnableAutoLPM;

@end
