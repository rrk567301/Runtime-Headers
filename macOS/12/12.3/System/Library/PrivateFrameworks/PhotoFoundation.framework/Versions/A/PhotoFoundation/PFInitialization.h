@interface PFInitialization : NSObject

+ (void)initialize;
+ (id)dependencies;
+ (void)_synchronize:(id /* block */)a0;
+ (void)scanForInitializationClasses;
+ (void)requestInitialization:(id /* block */)a0;
+ (id)workItem;
+ (id)_getWorkItem;
+ (unsigned long long)initializationTrigger;
+ (id)associationKey;
+ (id)_getWorkItem_completed;
+ (Class)workItemClass;
+ (BOOL)mainThreadOnly;
+ (id)subordinates;
+ (id)singletonConfigurationClasses;
+ (void)waitForInitialization;
+ (void)addInitializationCompletionCallbackBlock:(id /* block */)a0;
+ (void)beginInitializationActivity;
+ (void)endInitializationActivity;
+ (void)startInitialization;
+ (void)_willInitialize;
+ (void)performInitialization;
+ (void)_initializationComplete;
+ (void)configureSingleton:(id)a0 forClass:(Class)a1;

@end
