@interface ASDUpdateWatchApps : NSObject

+ (char)shouldPromptBeforeUpdating;
+ (char)updateBundleIDs:(id)a0 userInitiated:(char)a1 error:(id *)a2;

@end
