@interface PFPostLaunchInitializationWorkItem : PFInitializationWorkItem

+ (void)registerPostLaunchBlock:(id /* block */)a0;
+ (void)registerMainThreadPostLaunchBlock:(id /* block */)a0;

- (id)init;

@end
