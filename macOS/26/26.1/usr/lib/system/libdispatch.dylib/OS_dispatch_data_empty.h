@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_resume;
- (id)retain;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_activate;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void *)_getContext;
- (void)_setTargetQueue:(id)a0;
- (void)_setContext:(void *)a0;
- (id)autorelease;
- (void)_suspend;

@end
