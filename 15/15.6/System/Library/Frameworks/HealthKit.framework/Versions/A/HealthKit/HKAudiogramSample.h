@class NSArray, NSString, NSData, HKHearingLevelSummary;

@interface HKAudiogramSample : HKSample <_HKBinarySample>

@property (retain, nonatomic) NSData *encodedSensitivityPoints;
@property (readonly, copy, nonatomic) HKHearingLevelSummary *hearingLevelSummary;
@property (readonly, copy) NSArray *sensitivityPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)_decodeSensitivityData:(id)a0;
+ (id)_encodeSensitivityPoints:(id)a0;
+ (char)_isConcreteObjectClass;
+ (double)_randomDecibelValueInRangeFromStart:(double)a0 end:(double)a1;
+ (id)_sensitivityPointWithFrequency:(id)a0 leftEarSensitivity:(id)a1 rightEarSensitivity:(id)a2 error:(id *)a3;
+ (id)audiogramSampleWithLeftEarAverageSensitivity:(id)a0 rightEarAverageSensitivity:(id)a1 startDate:(id)a2 endDate:(id)a3 device:(id)a4 metadata:(id)a5;
+ (id)audiogramSampleWithSensitivityPoints:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4;
+ (id)audiogramSampleWithSensitivityPoints:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3;
+ (id)clampingLowestBoundForValidityCheck;
+ (id)clampingMaximumLowerBoundForValidityCheckPerFrequency;
+ (id)ptaFrequencies;
+ (id)randomAudiogramSampleWithClassification:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4;
+ (id)randomAudiogramSampleWithLeftEarClassification:(unsigned long long)a0 rightEarClassification:(unsigned long long)a1 startDate:(id)a2 endDate:(id)a3 device:(id)a4 metadata:(id)a5;
+ (id)randomSensitivityValueForClassification:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)payload;
- (unsigned long long)diagnostic;
- (char)isAmbiguous;
- (char)hasSomeClampingForAnyFrequency:(id)a0;
- (char)_firstPartyHearingTest;
- (char)_firstPartyIngestion;
- (id)_keyFrequencyPointsFrom:(id)a0 forSide:(long long)a1;
- (unsigned long long)_rawHearingLevelClassificationFrom:(id)a0;
- (void)_setPayload:(id)a0;
- (id)_validateSensitivityPointsOrderedAscending;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)averageLeftEarSensitivity;
- (id)averageRightEarSensitivity;
- (id)averageSensitivityForSide:(long long)a0;
- (id)clampingLowerBoundPositionsPerFrequencyAtSide:(long long)a0;
- (char)containSensitivityPointsIsMasked:(char)a0 forSide:(long long)a1;
- (char)hasDifferentClassificationWithModifiedClampingRange;
- (char)hasTooMuchClampingForAnyFrequency:(id)a0;
- (char)hasTooMuchClampingForAnyKeyFrequency:(id)a0;
- (char)isAverageSensitivityUpperClampedForAnySide;
- (char)isAverageSensitivityUpperClampedForSide:(long long)a0;
- (char)isFirstPartyHearingTestResult;
- (unsigned long long)leftEarDiagnostic;
- (id)localizedIngestionSource;
- (id)maximumSensitivity;
- (id)minimumSensitivity;
- (unsigned long long)rightEarDiagnostic;

@end
