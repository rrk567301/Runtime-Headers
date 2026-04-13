@interface REMCloudContainer : NSObject

+ (id)newCloudContainerForAccountID:(id)a0;
+ (BOOL)isSandboxEnvironment;
+ (id)defaultCloudContainerName;
+ (id)defaultCloudContainer;

@end
