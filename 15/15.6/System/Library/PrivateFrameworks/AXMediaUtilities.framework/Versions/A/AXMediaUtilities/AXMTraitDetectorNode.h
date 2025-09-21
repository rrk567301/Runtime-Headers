@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long sampleFrequency;
@property (nonatomic) char shouldEvaluateColorInformation;
@property (nonatomic) double colorDistanceTheshold;

+ (id)title;
+ (char)isSupported;

- (id)_blurValueForVisionObservation:(id)a0;
- (id)_brightnessValueForVisionObservation:(id)a0;
- (void)_evaluateColorInformation:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (char)requiresVisionFramework;
- (char)validateVisionKitSoftLinkSymbols;

@end
