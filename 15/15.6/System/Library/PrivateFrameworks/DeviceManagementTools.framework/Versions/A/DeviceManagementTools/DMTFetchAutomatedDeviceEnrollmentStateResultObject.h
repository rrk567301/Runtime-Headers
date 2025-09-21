@interface DMTFetchAutomatedDeviceEnrollmentStateResultObject : CATTaskResultObject

@property (nonatomic) long long enrollmentState;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
