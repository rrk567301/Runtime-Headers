@interface GKEntitledContextProvider : NSObject

+ (id)getCurrentDeviceName;
+ (BOOL)hasAnyGameCenterEntitlement;
+ (BOOL)hasBooleanPublicGameCenterEntitlement;
+ (BOOL)hasPrivateContactsEntitlement;
+ (BOOL)hasPublicGroupActivitiesEntitlement;

- (id)init;

@end
