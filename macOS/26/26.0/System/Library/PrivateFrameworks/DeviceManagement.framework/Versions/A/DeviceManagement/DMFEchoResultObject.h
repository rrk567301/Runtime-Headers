@class NSString;

@interface DMFEchoResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *echo;
@property (copy, nonatomic) NSString *resultStatus;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
