@interface _TSF_TSDgPTPLocalClockPort : _TSF_TSDgPTPPort

@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;
@property (nonatomic) BOOL hasNtpAnchorOffsetNsec;
@property (nonatomic) long long ntpAnchorOffsetNsec;
@property (nonatomic) BOOL hasLocalClockSourceFromNTP;
@property (nonatomic) BOOL localClockSourceFromNTP;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (int)portType;
- (BOOL)_hasLocalClockSourceFromNTP;
- (BOOL)_hasLocalFrequencyStabilityLower;
- (BOOL)_hasLocalFrequencyStabilityUpper;
- (BOOL)_hasLocalFrequencyToleranceLower;
- (BOOL)_hasLocalFrequencyToleranceUpper;
- (BOOL)_hasNtpAnchorOffsetNsec;
- (BOOL)_localClockSourceFromNTP;
- (int)_localFrequencyStabilityLower;
- (int)_localFrequencyStabilityUpper;
- (int)_localFrequencyToleranceLower;
- (int)_localFrequencyToleranceUpper;
- (unsigned char)_localOscillatorType;
- (long long)_ntpAnchorOffsetNsec;
- (id)initWithService:(id)a0 pid:(int)a1;

@end
