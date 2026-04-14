@class NSString;

@interface DMFEchoResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *echo;
@property (copy, nonatomic) NSString *resultStatus;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
