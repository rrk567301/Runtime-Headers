@class _TSF_TSDgPTPLocalClockPort;

@interface TSgPTPLocalClockPort : TSgPTPPort {
    _TSF_TSDgPTPLocalClockPort *_impl;
}

@property (readonly, nonatomic) unsigned char localOscillatorType;
@property (readonly, nonatomic) char hasLocalFrequencyToleranceLower;
@property (readonly, nonatomic) int localFrequencyToleranceLower;
@property (readonly, nonatomic) char hasLocalFrequencyToleranceUpper;
@property (readonly, nonatomic) int localFrequencyToleranceUpper;
@property (readonly, nonatomic) char hasLocalFrequencyStabilityLower;
@property (readonly, nonatomic) int localFrequencyStabilityLower;
@property (readonly, nonatomic) char hasLocalFrequencyStabilityUpper;
@property (readonly, nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalOscillatorType;

- (void).cxx_destruct;
- (char)hasLocalFrequencyStabilityLower;
- (char)hasLocalFrequencyToleranceLower;
- (char)hasLocalFrequencyStabilityUpper;
- (char)hasLocalFrequencyToleranceUpper;
- (id)initWithImplDC:(id)a0;
- (int)localFrequencyStabilityLower;
- (int)localFrequencyStabilityUpper;
- (int)localFrequencyToleranceLower;
- (int)localFrequencyToleranceUpper;
- (unsigned char)localOscillatorType;

@end
