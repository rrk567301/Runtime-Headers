@interface DMTFetchAutomatedDeviceEnrollmentStateResultObject : CATTaskResultObject

@property (nonatomic) long long enrollmentState;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
