@class NSString;

@interface CRKFetchControlGroupIdentifiersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *leaderIdentifier;
@property (nonatomic) char includeTemporary;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
