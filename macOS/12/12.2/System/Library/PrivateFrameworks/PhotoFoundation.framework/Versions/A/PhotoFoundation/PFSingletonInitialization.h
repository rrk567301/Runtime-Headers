@interface PFSingletonInitialization : PFInitialization

+ (id)singleton;
+ (void)_willInitialize;
+ (Class)workItemClass;
+ (void)setSingleton:(id)a0;
+ (BOOL)allowsSingletonAccessDuringConfiguration;
+ (id)_sharedConditionLock;
+ (id)undefinedSingleton;

@end
