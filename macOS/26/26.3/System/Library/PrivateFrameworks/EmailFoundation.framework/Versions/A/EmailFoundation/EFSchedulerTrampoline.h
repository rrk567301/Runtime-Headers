@protocol EFScheduler;

@interface EFSchedulerTrampoline : NSObject {
    id<EFScheduler> _scheduler;
    id _object;
}

+ (id)trampolineWithScheduler:(id)a0 object:(id)a1;

- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)_initWithScheduler:(id)a0 object:(id)a1;

@end
