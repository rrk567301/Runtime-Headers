@class NSString, CBGammaContrastPreservationParams;

@interface CBGammaContrastPreservationPolicy : NSObject <CBChromaticCorrectionPolicy, CBLuxRampPolicy> {
    CBGammaContrastPreservationParams *_params;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) float rampUpDuration;
@property (readonly) float rampDownDuration;

- (id)rampIdentifier;
- (void)dealloc;
- (id)initWithParams:(id)a0;
- (const char *)name;
- (float)cappedRampStartLux:(float)a0;
- (float)cappedRampTargetLux:(float)a0;
- (id)isEnabledPropertyKey;
- (BOOL)luxIsInActiveRange:(float)a0;
- (BOOL)nitsAreInActiveRange:(float)a0;
- (float)rampDownLuxDeltaThresholdFor:(float)a0;
- (float)rampTargetLuxCap;
- (float)rampUpLuxDeltaThresholdFor:(float)a0;
- (float)strengthForNits:(float)a0 andLux:(float)a1;
- (id)strengthNotification;

@end
