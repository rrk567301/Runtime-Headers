@interface PFInitialization : NSObject

+ (id)dependencies;
+ (void)_synchronize:(id /* block */)a0;
+ (void)initialize;
+ (void)_initializationComplete;
+ (void)waitForInitialization;
+ (void)_willInitialize;
+ (id)_getWorkItem;
+ (id)_getWorkItem_completed;
+ (void)addInitializationCompletionCallbackBlock:(id /* block */)a0;
+ (id)associationKey;
+ (void)beginInitializationActivity;
+ (void)configureSingleton:(id)a0 forClass:(Class)a1;
+ (void)endInitializationActivity;
+ (unsigned long long)initializationTrigger;
+ (BOOL)mainThreadOnly;
+ (void)performInitialization;
+ (void)requestInitialization:(id /* block */)a0;
+ (void)scanForInitializationClasses;
+ (id)singletonConfigurationClasses;
+ (void)startInitialization;
+ (id)subordinates;
+ (id)workItem;
+ (Class)workItemClass;

@end
