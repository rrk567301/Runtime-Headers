@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)_setContext:(void *)a0;
- (void *)_getContext;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_setTargetQueue:(id)a0;
- (void)_suspend;
- (void)_resume;
- (void)_activate;

@end
