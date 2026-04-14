@class NSData, NSArray, NSString;

@interface HKAudiogramSample : HKSample <_HKBinarySample>

@property (retain, nonatomic) NSData *encodedSensitivityPoints;
@property (readonly, copy) NSArray *sensitivityPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)audiogramSampleWithSensitivityPoints:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3;
+ (id)_encodeSensitivityPoints:(id)a0;
+ (id)_decodeSensitivityData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)payload;
- (unsigned long long)diagnostic;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setPayload:(id)a0;
- (id)_validateSensitivityPointsOrderedAscending;
- (id)_leftDiagnosticSensitivityPoints;
- (id)_rightDiagnosticSensitivityPoints;
- (id)_leftSensitivityPoints;
- (id)_rightSensitivityPoints;
- (id)_pureToneAverageForDiagnosticSensitivityPoints:(id)a0;
- (id)_averageEarSensitivityForDiagnosticSensitivityPoints:(id)a0;
- (unsigned long long)_diagnosticForSensitivity:(id)a0;
- (id)averageLeftEarSensitivity;
- (id)averageRightEarSensitivity;
- (id)minimumSensitivity;
- (id)maximumSensitivity;

@end
