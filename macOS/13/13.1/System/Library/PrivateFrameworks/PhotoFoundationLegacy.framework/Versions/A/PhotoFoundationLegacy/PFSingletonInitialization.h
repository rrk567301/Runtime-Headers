@interface PFSingletonInitialization : PFInitialization

+ (id)singleton;
+ (void)setSingleton:(id)a0;
+ (void)_willInitialize;
+ (Class)workItemClass;
+ (BOOL)allowsSingletonAccessDuringConfiguration;
+ (id)_sharedConditionLock;
+ (id)undefinedSingleton;

@end
