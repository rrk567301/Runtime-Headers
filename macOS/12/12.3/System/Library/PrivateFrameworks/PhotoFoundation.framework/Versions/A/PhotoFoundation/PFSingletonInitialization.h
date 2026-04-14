@interface PFSingletonInitialization : PFInitialization

+ (id)singleton;
+ (Class)workItemClass;
+ (void)_willInitialize;
+ (void)setSingleton:(id)a0;
+ (id)undefinedSingleton;
+ (id)_sharedConditionLock;
+ (BOOL)allowsSingletonAccessDuringConfiguration;

@end
