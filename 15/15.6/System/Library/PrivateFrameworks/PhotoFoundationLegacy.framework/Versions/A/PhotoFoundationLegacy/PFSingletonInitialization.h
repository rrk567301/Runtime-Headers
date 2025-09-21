@interface PFSingletonInitialization : PFInitialization

+ (id)singleton;
+ (void)setSingleton:(id)a0;
+ (void)_willInitialize;
+ (id)_sharedConditionLock;
+ (char)allowsSingletonAccessDuringConfiguration;
+ (id)undefinedSingleton;
+ (Class)workItemClass;

@end
