@protocol EFScheduler;

@interface EFSchedulerTrampoline : NSObject {
    id<EFScheduler> _scheduler;
    id _object;
}

+ (id)trampolineWithScheduler:(id)a0 object:(id)a1;

- (id)debugDescription;
- (void)forwardInvocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)_initWithScheduler:(id)a0 object:(id)a1;

@end
