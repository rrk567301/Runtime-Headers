@class NSArray, NSString;

@interface SAUserActivity : SADomainObject

@property (copy, nonatomic) NSArray *eligibileFunctions;
@property (copy, nonatomic) NSString *internalGUID;
@property (nonatomic) char isEligibleForAppPunchout;
@property (nonatomic) char isEligibleForDirections;
@property (nonatomic) char isEligibleForHandoff;
@property (nonatomic) char isEligibleForPublicIndexing;
@property (nonatomic) char isEligibleForReminders;
@property (nonatomic) char isEligibleForSearch;

+ (id)userActivity;
+ (id)userActivityWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
