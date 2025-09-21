@interface GKEntitledContextProvider : NSObject

+ (id)getCurrentDeviceName;
+ (char)hasAnyGameCenterEntitlement;
+ (char)hasBooleanPublicGameCenterEntitlement;
+ (char)hasPublicGroupActivitiesEntitlement;

- (id)init;

@end
