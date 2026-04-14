@interface PFInitialization : NSObject

+ (void)initialize;
+ (id)dependencies;
+ (void)_synchronize:(id /* block */)a0;
+ (void)_initializationComplete;
+ (void)waitForInitialization;
+ (id)_getWorkItem_completed;
+ (id)_getWorkItem;
+ (void)startInitialization;
+ (void)scanForInitializationClasses;
+ (id)associationKey;
+ (BOOL)mainThreadOnly;
+ (id)subordinates;
+ (void)_willInitialize;
+ (void)performInitialization;
+ (Class)workItemClass;
+ (id)workItem;
+ (unsigned long long)initializationTrigger;
+ (void)addInitializationCompletionCallbackBlock:(id /* block */)a0;
+ (void)requestInitialization:(id /* block */)a0;
+ (void)beginInitializationActivity;
+ (void)endInitializationActivity;
+ (void)configureSingleton:(id)a0 forClass:(Class)a1;
+ (id)singletonConfigurationClasses;

@end
