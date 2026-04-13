@class NSString, CNSocialProfile;

@interface CNSocialProfileContactPredicate : CNPredicate <CNSuggestedContactPredicate, CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CNSocialProfile *socialProfile;

+ (BOOL)supportsSecureCoding;
+ (id)predicatesForUsername:(id)a0;
+ (id)predicatesForUserIdentifier:(id)a0;
+ (id)predicatesForServiceName:(id)a0;
+ (id)predicatesForURLString:(id)a0;
+ (id)predicatesForDisplayName:(id)a0;
+ (id)predicatesForBundleIdentifier:(id)a0;
+ (id)predicatesForTeamIdentifier:(id)a0;
+ (id)predicateForKey:(id)a0 containsValue:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (id)initWithSocialProfile:(id)a0;

@end
