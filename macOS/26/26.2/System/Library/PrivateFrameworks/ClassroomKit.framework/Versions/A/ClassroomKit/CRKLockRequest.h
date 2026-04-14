@class NSString;

@interface CRKLockRequest : CATTaskRequest

@property (copy, nonatomic) NSString *lockedByLabel;
@property (copy, nonatomic) NSString *passcode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
