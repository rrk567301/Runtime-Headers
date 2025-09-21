@class NSSet;

@interface DMFFetchLastLoginDateRequest : DMFTaskRequest

@property (copy, nonatomic) NSSet *appleIDs;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
