@class NSNumber;

@interface APCSContentRestrictionsPreferences : APConfiguration

@property (readonly, nonatomic) NSNumber *contentRestrictionEnforcementEnabled;
@property (readonly, nonatomic) NSNumber *supportsDontAllow;

+ (id)path;

@end
