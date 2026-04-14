@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject

@property (class, readonly, nonatomic) double defaultFaceToDevicePitchAngle;

@property (retain, nonatomic) RMRelativeMotionManager *manager;
@property (nonatomic) double sessionStartTimestamp;
@property BOOL sessionStartedWithTracking;
@property (nonatomic) long long clientMode;

+ (BOOL)isAvailable;
+ (BOOL)_isClientModeAvailable:(long long)a0;

- (BOOL)_start;
- (id)_initWithOptions:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_stop;
- (id)init;
- (long long)_currentAudioListenerPose:(struct { double x0; double x1; double x2; double x3; } *)a0 timestamp:(double *)a1;
- (long long)_currentAudioListenerPose:(id *)a0;
- (void)_resetTrackingForAllClients;
- (void)axHeadTrackingSettingChanged;
- (struct __CFNotificationCenter { } *)axNotificationCenter;
- (BOOL)isAXHeadTrackingSettingEnabled;
- (void)startMonitoringAXHeadTrackingSetting;
- (void)stopMonitoringAXHeadTrackingSetting;

@end
