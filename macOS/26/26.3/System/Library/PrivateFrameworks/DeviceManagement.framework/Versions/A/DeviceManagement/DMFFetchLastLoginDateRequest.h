@class NSSet;

@interface DMFFetchLastLoginDateRequest : DMFTaskRequest

@property (copy, nonatomic) NSSet *appleIDs;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
