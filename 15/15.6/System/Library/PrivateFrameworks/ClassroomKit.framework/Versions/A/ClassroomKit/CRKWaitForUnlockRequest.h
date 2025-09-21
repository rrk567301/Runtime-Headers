@interface CRKWaitForUnlockRequest : CATTaskRequest

@property (nonatomic) char shouldBecomeExclusive;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
