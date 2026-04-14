@interface TSgPTPLocalClockPort : TSgPTPPort

@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (int)portType;
- (id)initWithService:(id)a0;
- (BOOL)_commonInitWithService:(id)a0;
- (id)initWithMatchingDictionary:(id)a0;
- (unsigned char)_localOscillatorType;
- (BOOL)_hasLocalFrequencyToleranceLower;
- (int)_localFrequencyToleranceLower;
- (BOOL)_hasLocalFrequencyToleranceUpper;
- (int)_localFrequencyToleranceUpper;
- (BOOL)_hasLocalFrequencyStabilityLower;
- (int)_localFrequencyStabilityLower;
- (BOOL)_hasLocalFrequencyStabilityUpper;
- (int)_localFrequencyStabilityUpper;

@end
