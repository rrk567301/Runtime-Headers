@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSString *bypassCode;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBypassCode:(id)a0;

@end
