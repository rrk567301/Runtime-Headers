@class NSString;

@interface TLAlertQueuePlayerAnalytics : NSObject

@property (class, readonly, nonatomic) char isDeviceCurrentlyCharging;

@property (readonly, nonatomic) long long alertType;
@property (readonly, nonatomic) NSString *toneIdentifierForAnalytics;
@property (readonly, nonatomic) NSString *toneKindForAnalytics;
@property (nonatomic) float userVolume;
@property (nonatomic, getter=isAttentionAwarenessSupportEnabled) char attentionAwarenessSupportEnabled;
@property (nonatomic) char wasDeviceChargingOnStart;
@property (nonatomic) char wasDeviceChargingOnStop;
@property (nonatomic) char didAttenuatePlayback;
@property (nonatomic) double startTime;
@property (nonatomic) double attenuationTime;
@property (nonatomic) double stopTime;

- (id)description;
- (void).cxx_destruct;
- (void)_initializeToneIdentifierAndToneKindFromAlert:(id)a0;
- (id)initWithAlert:(id)a0;

@end
