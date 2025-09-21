@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SystemSettingsRelay : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _packetFilterStateLock;
    double _packetFilterStateLastUpdated;
    NSString *_packetFilterState;
}

@property (retain, nonatomic) NSDictionary *autoBugCaptureConfiguration;
@property (nonatomic) char registeredForAutoBugCaptureChangeNotifications;
@property (nonatomic) char autoFeedbackAssistantInitialized;
@property (nonatomic) char geoIPTrackingFeatureFlagEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *packetFilterState;
@property (readonly, nonatomic) NSString *symptomEvaluatorDatabaseContainerPath;
@property (readonly) char autoBugCaptureEnabled;
@property (readonly) char autoFeedbackAssistantEnable;
@property (readonly) char autoBugCaptureAvailable;
@property (readonly) int autoBugCaptureEnhancedBetaFeedbackState;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)defaultRelay;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)getAutoBugCaptureConfiguration;
- (void)_setAutoBugCaptureAvailable:(char)a0;
- (void)_setAutoBugCaptureEnabled:(char)a0;
- (void)_setAutoFeedbackAssistantEnable:(char)a0;
- (id)getPacketFilterStateFromKernel;
- (void)registerForAutoBugCaptureChangeNotifications;

@end
