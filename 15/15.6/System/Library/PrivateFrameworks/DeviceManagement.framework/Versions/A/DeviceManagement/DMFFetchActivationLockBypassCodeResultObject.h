@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSString *bypassCode;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBypassCode:(id)a0;

@end
