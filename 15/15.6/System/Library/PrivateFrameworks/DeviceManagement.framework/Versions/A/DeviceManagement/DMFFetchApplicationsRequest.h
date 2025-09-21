@class NSArray;

@interface DMFFetchApplicationsRequest : DMFTaskRequest

@property (nonatomic) char excludeIcon;
@property (nonatomic) char excludeUnmanagedApps;
@property (nonatomic) char deleteFeedback;
@property (nonatomic) unsigned long long typeFilter;
@property (nonatomic) unsigned long long stateFilter;
@property (copy, nonatomic) NSArray *bundleIdentifiers;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
