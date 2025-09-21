@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)autorelease;
- (void)_resume;
- (id)retain;
- (void *)_getContext;
- (unsigned long long)retainCount;
- (void)_activate;
- (void)_setContext:(void *)a0;
- (oneway void)release;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_suspend;
- (void)_setTargetQueue:(id)a0;

@end
