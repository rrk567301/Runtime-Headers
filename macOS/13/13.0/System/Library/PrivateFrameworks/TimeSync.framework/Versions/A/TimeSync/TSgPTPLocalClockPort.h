@class TSXgPTPLocalClockPort;

@interface TSgPTPLocalClockPort : TSgPTPPort {
    TSXgPTPLocalClockPort *_implXPC;
}

@property (readonly, nonatomic) unsigned char localOscillatorType;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (readonly, nonatomic) int localFrequencyToleranceLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (readonly, nonatomic) int localFrequencyToleranceUpper;
@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (readonly, nonatomic) int localFrequencyStabilityLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (readonly, nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingLocalOscillatorType;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityUpper;

- (void).cxx_destruct;
- (unsigned char)localOscillatorType;
- (BOOL)hasLocalFrequencyToleranceLower;
- (int)localFrequencyToleranceLower;
- (BOOL)hasLocalFrequencyToleranceUpper;
- (int)localFrequencyToleranceUpper;
- (BOOL)hasLocalFrequencyStabilityLower;
- (int)localFrequencyStabilityLower;
- (BOOL)hasLocalFrequencyStabilityUpper;
- (int)localFrequencyStabilityUpper;
- (id)initWithImplXPC:(id)a0;

@end
