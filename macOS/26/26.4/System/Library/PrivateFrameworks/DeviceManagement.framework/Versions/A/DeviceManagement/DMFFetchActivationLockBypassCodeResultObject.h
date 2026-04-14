@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSString *bypassCode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBypassCode:(id)a0;

@end
