@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest : DMFTaskRequest

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic) char deleteFeedback;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSURL *manifestURL;
@property (nonatomic) char managedAppsOnly;
@property (nonatomic) char advanceTransientStates;
@property (copy, nonatomic) NSArray *propertyKeys;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
