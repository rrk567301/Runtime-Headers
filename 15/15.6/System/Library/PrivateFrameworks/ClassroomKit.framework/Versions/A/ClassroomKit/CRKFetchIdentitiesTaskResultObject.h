@class NSDictionary;

@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *courseIdentityInfosByGroupIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
