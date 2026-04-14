@interface REMCloudContainer : NSObject

+ (BOOL)isSandboxEnvironment;
+ (id)newCloudContainerForAccount:(id)a0;
+ (id)newCloudContainerForAccountID:(id)a0;
+ (id)newCloudContainerWithPublicCloudDatabase;

@end
