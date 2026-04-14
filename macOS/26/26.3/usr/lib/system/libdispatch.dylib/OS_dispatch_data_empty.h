@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_resume;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)_suspend;
- (id)retain;
- (void)_setTargetQueue:(id)a0;
- (void)_activate;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_setContext:(void *)a0;
- (void *)_getContext;
- (oneway void)release;

@end
