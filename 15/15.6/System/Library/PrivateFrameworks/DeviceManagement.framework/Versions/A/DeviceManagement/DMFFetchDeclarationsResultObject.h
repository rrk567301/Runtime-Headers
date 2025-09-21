@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *payloadDescriptions;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
