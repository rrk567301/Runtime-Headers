@class CBALSHotspotLocation, NSObject, CBALSEvent;
@protocol OS_os_log;

@interface CBALSNode : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly, nonatomic) struct __IOHIDServiceClient { } *alsService;
@property (readonly, nonatomic) unsigned int alsIOService;
@property (retain, nonatomic) CBALSEvent *currentALSEvent;
@property (readonly, nonatomic) unsigned int placement;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) int sensorType;
@property (readonly, nonatomic) BOOL builtIn;
@property (readonly, nonatomic) BOOL colorSupport;
@property (readonly, nonatomic) BOOL colorMitigation;
@property (readonly, nonatomic) int ceModel;
@property (readonly, nonatomic) float ceThreshold;
@property (readonly, nonatomic) BOOL supportsFloatLux;
@property (readonly, nonatomic) int superFastIntegrationTime;
@property (readonly, nonatomic) int fastIntegrationTime;
@property (readonly, nonatomic) int slowIntegrationTime;
@property (readonly, retain, nonatomic) CBALSHotspotLocation *overrideHotspot;
@property (readonly, nonatomic) BOOL useProxForOcclusion;
@property (readonly, nonatomic) long long digitizerFilterWindow;
@property (readonly, nonatomic) BOOL useCopyEventOnDisplayWake;

- (void)dealloc;
- (BOOL)handleALSEvent:(id)a0;
- (id)description;
- (BOOL)conformsToHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyALSEvent;
- (id)copyALSEventWithinTimeout:(float)a0;
- (struct __IOHIDEvent { } *)copyEvent;
- (id)copyHotspotLocation;
- (BOOL)getDigitizerFilterWindow;
- (int)getReportInterval;
- (BOOL)getSupportsFloatLuxValue;
- (BOOL)getUseProxForOcclusion;
- (void)initALSProperties;
- (id)initWithALSServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)isColorSupported;
- (void)setReportInterval:(int)a0;

@end
