@interface AMFolderActionsKitSoftLinking : NSObject

+ (void *)framework;
+ (void)softLink;
+ (Class)FolderActionsDispatcher;
+ (Class)FAFolderAction;
+ (Class)FAScript;

@end
