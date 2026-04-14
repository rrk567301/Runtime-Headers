@class NSString;

@interface CRKFetchActiveRestrictionUUIDsRequest : CATTaskRequest

@property (copy, nonatomic) NSString *clientType;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
