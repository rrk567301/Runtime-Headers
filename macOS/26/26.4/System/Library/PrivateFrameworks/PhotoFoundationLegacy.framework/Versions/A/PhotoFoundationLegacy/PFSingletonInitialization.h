@interface PFSingletonInitialization : PFInitialization

+ (void)setSingleton:(id)a0;
+ (id)singleton;
+ (void)_willInitialize;
+ (id)_sharedConditionLock;
+ (BOOL)allowsSingletonAccessDuringConfiguration;
+ (id)undefinedSingleton;
+ (Class)workItemClass;

@end
