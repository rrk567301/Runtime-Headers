@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSString *bypassCode;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBypassCode:(id)a0;

@end
