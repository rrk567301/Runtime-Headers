@class _TSF_TSDgPTPLocalClockPort;

@interface TSgPTPLocalClockPort : TSgPTPPort {
    _TSF_TSDgPTPLocalClockPort *_impl;
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
@property (readonly, nonatomic) BOOL hasNtpAnchorOffsetNsec;
@property (readonly, nonatomic) long long ntpAnchorOffsetNsec;
@property (readonly, nonatomic) BOOL hasLocalClockSourceFromNTP;
@property (readonly, nonatomic) BOOL localClockSourceFromNTP;

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
- (BOOL)hasLocalFrequencyStabilityLower;
- (BOOL)hasLocalFrequencyToleranceLower;
- (BOOL)hasLocalFrequencyStabilityUpper;
- (BOOL)hasLocalFrequencyToleranceUpper;
- (id)initWithImplDC:(id)a0;
- (BOOL)hasLocalClockSourceFromNTP;
- (BOOL)hasNtpAnchorOffsetNsec;
- (BOOL)localClockSourceFromNTP;
- (int)localFrequencyStabilityLower;
- (int)localFrequencyStabilityUpper;
- (int)localFrequencyToleranceLower;
- (int)localFrequencyToleranceUpper;
- (unsigned char)localOscillatorType;
- (long long)ntpAnchorOffsetNsec;

@end
