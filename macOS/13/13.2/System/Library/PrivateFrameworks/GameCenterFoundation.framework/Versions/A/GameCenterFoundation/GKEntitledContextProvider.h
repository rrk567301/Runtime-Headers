@interface GKEntitledContextProvider : NSObject

+ (id)getCurrentDeviceName;
+ (BOOL)isEntitledToUseGroupActivities;

- (id)init;

@end
