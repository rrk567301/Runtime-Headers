@class NSString, NSDate;

@interface AADeviceConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char acceptReplyPlayPauseConfig;
@property (nonatomic) char aclPriority;
@property (nonatomic) unsigned char adaptiveVolumeConfig;
@property (nonatomic) char allowsAutoRoute;
@property (nonatomic) char allowHealthKitDataWrite;
@property (nonatomic) char allowTemporaryManagedPairing;
@property (nonatomic) unsigned int autoANCStrength;
@property (copy, nonatomic) NSDate *audiogramEnrolledTimestamp;
@property (nonatomic) char audioRouteHidden;
@property (nonatomic) unsigned char bobbleConfig;
@property (nonatomic) char changeDynamicEndOfChargeState;
@property (nonatomic) char changeOptimizedBatteryChargingState;
@property (nonatomic) unsigned char clickHoldModeLeft;
@property (nonatomic) unsigned char clickHoldModeRight;
@property (nonatomic) unsigned char conversationDetectConfig;
@property (nonatomic) unsigned char crownRotationDirection;
@property (nonatomic) unsigned char declineDismissSkipConfig;
@property (nonatomic) char doubleTapActionLeft;
@property (nonatomic) char doubleTapActionRight;
@property (nonatomic) char enableChargingReminder;
@property (nonatomic) char enableHearingAidGainSwipe;
@property (nonatomic) char enableHearingAssist;
@property (nonatomic) char enableHeartRateMonitor;
@property (nonatomic) char enableHearingProtectionPPE;
@property (nonatomic) char enableSiriMultitone;
@property (nonatomic) char enableSleepDetection;
@property (nonatomic) unsigned char endCallConfig;
@property (nonatomic) char headGestureToggle;
@property (nonatomic) char headGestureProxCardShown;
@property (nonatomic) char hearingAidToggle;
@property (nonatomic) char hearingAidEnrolled;
@property (nonatomic) char hearingAidV2SourceRegionSupport;
@property (nonatomic) int listeningMode;
@property (nonatomic) unsigned int listeningModeConfigs;
@property (nonatomic) char listeningModeOffAllowed;
@property (nonatomic) char microphoneMode;
@property (nonatomic) unsigned char muteControlConfig;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char placementMode;
@property (nonatomic) unsigned short rawGesturesConfigFlags;
@property (nonatomic) char relinquishAudioRoute;
@property (nonatomic) unsigned char remoteCameraControlConfig;
@property (nonatomic) unsigned char selectiveSpeechListeningConfig;
@property (nonatomic) char smartRoutingMode;
@property (nonatomic) char spatialAudioAllowed;
@property (nonatomic) int spatialAudioMode;
@property (nonatomic) char systemSiriMode;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)needsUpdateToAAController;
- (BOOL)needsUpdateToPairedDevice;

@end
