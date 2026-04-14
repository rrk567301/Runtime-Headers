@interface PFDeferredInitialization : PFInitialization

+ (id)dependencies;
+ (Class)workItemClass;
+ (unsigned long long)initializationTrigger;

@end
