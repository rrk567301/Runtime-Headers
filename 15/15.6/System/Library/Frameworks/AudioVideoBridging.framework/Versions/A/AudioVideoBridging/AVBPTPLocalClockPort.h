@interface AVBPTPLocalClockPort : AVBPTPPort

@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) char hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) char hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) char hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) char hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void)_updateFromProperties:(id)a0;

@end
