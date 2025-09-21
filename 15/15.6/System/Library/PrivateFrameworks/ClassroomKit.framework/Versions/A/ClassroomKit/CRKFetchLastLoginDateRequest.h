@class NSSet;

@interface CRKFetchLastLoginDateRequest : CATTaskRequest

@property (copy, nonatomic) NSSet *appleIDs;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
