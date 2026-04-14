@interface REMCloudContainer : NSObject

+ (void)_writeLogCreatingCKContainerWithAccountIdentifier:(id)a0 personaIdentifier:(id)a1;
+ (id)newCloudContainerWithPublicCloudDatabase;
+ (id)_newCloudContainerForAccountIdentifier:(id)a0;
+ (id)newCloudContainerForAccount:(id)a0;
+ (id)newCloudContainerForAccountID:(id)a0;
+ (BOOL)isSandboxEnvironment;

@end
