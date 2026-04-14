@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_resume;
- (id)retain;
- (void)_setFinalizer:(void /* function */ *)a0;
- (unsigned long long)retainCount;
- (void)_suspend;
- (id)autorelease;
- (void)_setTargetQueue:(id)a0;
- (void *)_getContext;
- (oneway void)release;
- (void)_activate;
- (void)_setContext:(void *)a0;

@end
