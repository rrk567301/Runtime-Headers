@interface PFDeferredInitializationTrigger : PFInitializationWorkItemTrigger

+ (id)dependencies;
+ (char)mainThreadOnly;
+ (void)performInitialization;
+ (Class)workItemClass;

@end
