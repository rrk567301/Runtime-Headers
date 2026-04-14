@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_suspend;
- (id)autorelease;
- (void)_setContext:(void *)a0;
- (void)_resume;
- (void)_setTargetQueue:(id)a0;
- (id)retain;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_activate;
- (void *)_getContext;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
