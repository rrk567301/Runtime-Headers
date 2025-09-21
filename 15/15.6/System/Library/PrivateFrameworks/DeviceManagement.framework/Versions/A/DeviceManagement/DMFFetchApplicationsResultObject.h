@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *applicationsByIdentifier;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationsByIdentifier:(id)a0;

@end
