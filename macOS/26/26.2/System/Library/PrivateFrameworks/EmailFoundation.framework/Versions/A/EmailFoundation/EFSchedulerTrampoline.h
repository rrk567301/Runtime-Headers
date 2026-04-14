@protocol EFScheduler;

@interface EFSchedulerTrampoline : NSObject {
    id<EFScheduler> _scheduler;
    id _object;
}

+ (id)trampolineWithScheduler:(id)a0 object:(id)a1;

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)_initWithScheduler:(id)a0 object:(id)a1;

@end
