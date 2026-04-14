@interface PFDeferredInitializationTrigger : PFInitializationWorkItemTrigger

+ (id)dependencies;
+ (Class)workItemClass;
+ (BOOL)mainThreadOnly;
+ (void)performInitialization;

@end
