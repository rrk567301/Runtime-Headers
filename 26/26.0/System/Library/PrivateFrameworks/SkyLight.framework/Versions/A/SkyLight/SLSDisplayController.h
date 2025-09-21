@class NSUUID, NSDictionary, NSString, SLSBrightnessControlClient, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SLSDisplayController : NSObject <SLSBrightnessControl> {
    NSObject<OS_dispatch_queue> *_notifyQueue;
    SLSBrightnessControlClient *_controlClient;
    NSMutableDictionary *_notificationBlocks;
    struct SLSBrightnessTxState { float ambient; float filtered_ambient; float sdr_brightness; float brightness_limit; float headroom; float potential_headroom; float reference_headroom; float contrast_preservation; float low_ambient_adaptation; float high_ambient_adaptation; float indicator_brightness; float indicator_brightness_limit; unsigned int mask; } _brightnessTx;
    struct SLSBrightnessTimeoutTxState { double shielding_timeout; double dim_timeout; double sleep_timeout; unsigned int mask; } _brightnessTimeoutTx;
}

@property (nonatomic) int displayId;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long vendorId;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *containerId;
@property (nonatomic) BOOL brightnessAvailable;
@property (nonatomic) BOOL whitePointAvailable;
@property (nonatomic) BOOL whitePointD50XYZ;
@property (nonatomic, getter=isOnline) BOOL online;
@property (nonatomic) float maximumLuminance;
@property (nonatomic) struct { float x; float y; } nativeWhitePoint;
@property (nonatomic) unsigned int displayType;
@property (copy, nonatomic) NSDictionary *brightnessCapabilities;
@property (nonatomic) unsigned long long serialNumber;
@property (nonatomic) unsigned long long displayAttachmentSeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationQueue;
- (void)setFilteredAmbient:(float)a0;
- (void)setHighAmbientAdaptation:(float)a0;
- (void)dealloc;
- (void)setContrastPreservation:(float)a0;
- (void)setPotentialHeadroom:(float)a0;
- (void)setHeadroom:(float)a0;
- (BOOL)setWhitePoint:(struct { float x0[9]; } *)a0 rampDuration:(double)a1 error:(id *)a2;
- (void)setBrightnessLimit:(float)a0;
- (void)setNotificationQueue:(id)a0;
- (BOOL)abortWhitePointRamp:(struct { float x0[9]; } *)a0 error:(id *)a1;
- (void)postNotification:(id)a0 payload:(id)a1;
- (void)setLowAmbientAdaptation:(float)a0;
- (void)registerForNotifications:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)commitBrightness:(id *)a0;
- (void)setSDRBrightness:(float)a0;
- (void)setAmbient:(float)a0;
- (void)unregisterNotificationBlocks;
- (BOOL)getLinearBrightness:(float *)a0 error:(id *)a1;
- (BOOL)abortContrastEnhancerRamp:(float *)a0 error:(id *)a1;
- (BOOL)commitBrightnessTimeouts:(id *)a0;
- (id)displayInfo;
- (BOOL)getNits:(float *)a0 error:(id *)a1;
- (id)initWithDisplayId:(int)a0 capabilities:(id)a1 client:(id)a2;
- (void)setApplyPolicy;
- (BOOL)setContrastEnhancer:(float)a0 rampDuration:(double)a1 error:(id *)a2;
- (void)setDimMessagingTimeout:(double)a0;
- (void)setIndicatorBrightness:(float)a0;
- (void)setIndicatorBrightnessLimit:(float)a0;
- (BOOL)setLinearBrightness:(float)a0 error:(id *)a1;
- (void)setReferenceHeadroom:(float)a0;
- (void)setShieldingTimeout:(double)a0;
- (void)setSleepMessagingTimeout:(double)a0;

@end
