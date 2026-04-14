@class NSString, NSObject;
@protocol OS_os_log, SLSBrightnessControl;

@interface CBBrightnessProxySKL : NSObject <CBBrightnessProxy> {
    NSObject<OS_os_log> *_logHandle;
    id<SLSBrightnessControl> _brightnessControl;
}

@property (readonly) id brightnessNotificationRequestEDR;
@property (readonly) NSString *brightnessRequestEDRHeadroom;
@property (readonly) NSString *brightnessRequestRampDuration;
@property (readonly) id CBDispTypeIntegrated;
@property (readonly) id CBDispTypeExternal;
@property (readonly) id CBDispTypeWireless;
@property (readonly) id CBDispTypeVirtual;
@property (readonly) id CBDispTypeDFR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)unregisterNotificationBlocks;
- (void)setSDRBrightness:(float)a0;
- (void)setBrightnessLimit:(float)a0;
- (void)setHeadroom:(float)a0;
- (void)setPotentialHeadroom:(float)a0;
- (void)setAmbient:(float)a0;
- (BOOL)commitBrightness:(id *)a0;
- (void)registerForNotifications:(id)a0 withBlock:(id /* block */)a1;
- (void)setNotificationQueue:(id)a0;
- (BOOL)setWhitePoint:(id)a0 rampDuration:(double)a1 error:(id *)a2;
- (BOOL)isBrightnessAvailable;
- (BOOL)isWhitePointAvailable;
- (BOOL)isWhitePointD50XYZ;
- (id)getBrightnessCapabilities;
- (unsigned int)getDisplayId;
- (id)getDisplayType;
- (unsigned long long)getVendorId;
- (unsigned long long)getProductId;
- (id)getUUID;
- (id)initWithSLSBrightnessControl:(id)a0;

@end
