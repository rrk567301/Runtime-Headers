@class NSString, NSDictionary, NSObject;
@protocol OS_os_log;

@interface CBGammaContrastPreservationParams : NSObject <CBChromaticCorectionParamsProtocol, CBSerializable> {
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) unsigned int supported;
@property (readonly) float referenceWhiteBrightness;
@property (readonly) float referenceLux;
@property (readonly) float Lmin;
@property (readonly) float Lmax;
@property (readonly) float ambientFactor;
@property (readonly) float Bmin;
@property (readonly) float Bmax;
@property (readonly) float gammaMin;
@property (readonly) float gammaMax;
@property (readonly) float gcpFactorLow;
@property (readonly) float gcpFactorHigh;
@property (readonly) float ASb;
@property (readonly) float Kb;
@property (readonly) float Kl;
@property (readonly) float luxActivationThreshold;
@property (readonly) float nitsActivationThreshold;
@property (readonly) float rampUpdateRate;
@property (readonly) float rampUpDuration;
@property (readonly) float rampUpLuxDeltaThreshold;
@property (readonly) float rampDownDuration;
@property (readonly) float rampDownLuxDeltaThreshold;
@property (readonly) float aodRampDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *codingKeys;

+ (id)paramsWithProvider:(id)a0;

- (id)initWithProvider:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
