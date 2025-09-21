@class NSArray, HKQuantity;

@interface HKAudiogramSensitivityPoint : NSObject <NSSecureCoding> {
    HKQuantity *_frequency;
    HKQuantity *_leftEarSensitivity;
    HKQuantity *_rightEarSensitivity;
    NSArray *_tests;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) HKQuantity *frequency;
@property (readonly, copy) HKQuantity *leftEarSensitivity;
@property (readonly, copy) HKQuantity *rightEarSensitivity;
@property (readonly, copy, nonatomic) NSArray *tests;

+ (id)_createTestsFromLeftEarSensitivity:(id)a0 rightEarSensitivity:(id)a1 leftEarClampingRange:(id)a2 rightEarClampingRange:(id)a3 error:(id *)a4;
+ (id)_incompatibleUnit:(id)a0 incompatibleWith:(id)a1;
+ (id)_rangeViolationMin:(id)a0 max:(id)a1 value:(id)a2;
+ (char)_validateAirConductionTests:(id)a0 error:(id *)a1;
+ (char)_validateUnitForFrequency:(id)a0;
+ (char)_validateUnitForSensitivity:(id)a0;
+ (id)sensitivityPointWithFrequency:(id)a0 leftEarSensitivity:(id)a1 rightEarSensitivity:(id)a2 error:(id *)a3;
+ (id)sensitivityPointWithFrequency:(id)a0 tests:(id)a1 error:(id *)a2;
+ (char)validFrequency:(id)a0 error:(id *)a1;
+ (char)validSensitivity:(id)a0 error:(id *)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrequency:(id)a0 leftEarSensitivity:(id)a1 rightEarSensitivity:(id)a2;
- (id)initWithFrequency:(id)a0 tests:(id)a1;
- (char)isEqualToSensitivityPoint:(id)a0;

@end
