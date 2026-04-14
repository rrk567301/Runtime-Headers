@class NSString;

@interface CRKFetchActiveRestrictionUUIDsRequest : CATTaskRequest

@property (copy, nonatomic) NSString *clientType;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
