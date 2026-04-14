@class NSObject;
@protocol OS_dispatch_queue, _CDLocalContext;

@interface _OSIBLMState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL autoLPMEngagement;
@property (retain, nonatomic) id<_CDLocalContext> context;

+ (id)sharedInstance;
+ (id)sharedLog;
+ (id)loadNumberForPreferenceKey:(id)a0;
+ (BOOL)isIBLMSupported;
+ (BOOL)isIBLMDefaultOn;
+ (BOOL)isIBLMNotificationsDefaultOn;
+ (id)loadCurrentIBLMNotificationsState;
+ (id)loadCurrentIBLMState;
+ (void)saveCurrentIBLMNotificationsState:(long long)a0;
+ (void)saveCurrentIBLMState:(long long)a0;
+ (void)saveNumber:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;
- (void)client:(id)a0 setIBLMNotificationsState:(long long)a1;
- (void)client:(id)a0 setIBLMState:(long long)a1;
- (BOOL)isIBLMCurrentlyEnabled;
- (BOOL)isIBLMNotificationsCurrentlyEnabled;
- (void)monitorForAutoLPM;
- (BOOL)willEnableAutoLPM;

@end
