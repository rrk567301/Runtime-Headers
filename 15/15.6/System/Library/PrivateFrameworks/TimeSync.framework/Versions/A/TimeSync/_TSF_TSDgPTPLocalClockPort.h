@interface _TSF_TSDgPTPLocalClockPort : _TSF_TSDgPTPPort

@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) char hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) char hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) char hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) char hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (int)portType;
- (char)_hasLocalFrequencyStabilityLower;
- (char)_hasLocalFrequencyStabilityUpper;
- (char)_hasLocalFrequencyToleranceLower;
- (char)_hasLocalFrequencyToleranceUpper;
- (int)_localFrequencyStabilityLower;
- (int)_localFrequencyStabilityUpper;
- (int)_localFrequencyToleranceLower;
- (int)_localFrequencyToleranceUpper;
- (unsigned char)_localOscillatorType;
- (id)initWithService:(id)a0 pid:(int)a1;

@end
