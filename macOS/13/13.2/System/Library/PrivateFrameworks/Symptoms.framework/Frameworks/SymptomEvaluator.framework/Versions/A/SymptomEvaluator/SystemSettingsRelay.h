@class NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SystemSettingsRelay : NSObject

@property (retain, nonatomic) NSDictionary *autoBugCaptureConfiguration;
@property (nonatomic) BOOL registeredForAutoBugCaptureChangeNotifications;
@property (nonatomic) BOOL autoFeedbackAssistantInitialized;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSArray *wifiKnownNetworkSSIDs;
@property (readonly) BOOL domainTrackingFeatureFlagEnabled;
@property (readonly) BOOL autoBugCaptureEnabled;
@property (readonly) BOOL autoFeedbackAssistantEnable;
@property (readonly) BOOL autoBugCaptureAvailable;
@property (readonly) int autoBugCaptureEnhancedBetaFeedbackState;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)defaultRelay;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)getAutoBugCaptureConfiguration;
- (void)registerForAutoBugCaptureChangeNotifications;
- (void)_setAutoBugCaptureEnabled:(BOOL)a0;
- (void)_setAutoBugCaptureAvailable:(BOOL)a0;
- (void)_setAutoFeedbackAssistantEnable:(BOOL)a0;
- (void)setDomainTrackingFeatureFlagEnabled:(BOOL)a0;
- (void)grabKnownWiFiNetworks;

@end
