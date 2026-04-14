@interface GKEntitledContextProvider : NSObject

+ (id)getCurrentDeviceName;
+ (BOOL)hasAnyGameCenterEntitlement;
+ (BOOL)hasBooleanPublicGameCenterEntitlement;
+ (BOOL)isEntitledToUseGroupActivities;

- (id)init;

@end
