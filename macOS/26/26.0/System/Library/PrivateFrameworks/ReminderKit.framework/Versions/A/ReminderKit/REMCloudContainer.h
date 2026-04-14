@interface REMCloudContainer : NSObject

+ (id)_newCloudContainerForAccountIdentifier:(id)a0;
+ (id)newCloudContainerForAccountID:(id)a0;
+ (void)_writeLogCreatingCKContainerWithAccountIdentifier:(id)a0 personaIdentifier:(id)a1;
+ (id)newCloudContainerForAccount:(id)a0;
+ (id)newCloudContainerWithPublicCloudDatabase;
+ (BOOL)isSandboxEnvironment;

@end
