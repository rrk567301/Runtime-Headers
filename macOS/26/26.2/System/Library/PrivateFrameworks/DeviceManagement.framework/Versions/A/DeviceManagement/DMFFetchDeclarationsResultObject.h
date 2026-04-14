@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *payloadDescriptions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
