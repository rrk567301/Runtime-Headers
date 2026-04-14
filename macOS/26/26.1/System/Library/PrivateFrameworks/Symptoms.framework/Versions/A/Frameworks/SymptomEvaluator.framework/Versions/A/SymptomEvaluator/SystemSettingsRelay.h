@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SystemSettingsRelay : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _packetFilterStateLock;
    double _packetFilterStateLastUpdated;
    NSString *_packetFilterState;
}

@property (retain, nonatomic) NSDictionary *autoBugCaptureConfiguration;
@property (nonatomic) BOOL registeredForAutoBugCaptureChangeNotifications;
@property (nonatomic) BOOL autoFeedbackAssistantInitialized;
@property (nonatomic) BOOL ndfFeatureFlagEnabled;
@property (nonatomic) BOOL ndfEnabled;
@property (nonatomic) BOOL PHSFallbackFeatureFlagEnabled;
@property (nonatomic) BOOL geoIPTrackingFeatureFlagEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) BOOL wifiEnabled;
@property (readonly) BOOL noBackhaulEnabled;
@property (readonly, nonatomic) NSString *packetFilterState;
@property (readonly, nonatomic) NSString *symptomEvaluatorDatabaseContainerPath;
@property (readonly) BOOL autoBugCaptureEnabled;
@property (readonly) BOOL autoFeedbackAssistantEnable;
@property (readonly) BOOL autoBugCaptureAvailable;
@property (readonly) int autoBugCaptureEnhancedBetaFeedbackState;

+ (id)defaultRelay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_enableBrokenBackhaulWithBaseband:(BOOL)a0 prefStore:(struct __prefs_store { } *)a1;
- (void)_setAutoBugCaptureEnabled:(BOOL)a0;
- (void)_setAutoBugCaptureAvailable:(BOOL)a0;
- (void)_setAutoFeedbackAssistantEnable:(BOOL)a0;
- (id)getPacketFilterStateFromKernel;
- (void)_setWifiEnabled:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)registerForAutoBugCaptureChangeNotifications;
- (void)getAutoBugCaptureConfiguration;
- (id)init;
- (void)_setNoBackhaulEnabled:(BOOL)a0;

@end
