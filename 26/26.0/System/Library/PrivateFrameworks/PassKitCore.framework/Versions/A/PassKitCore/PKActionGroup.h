@class NSObject;
@protocol OS_dispatch_queue;

@interface PKActionGroup : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _activated;
    _Atomic unsigned short _count;
    struct atomic_flag { _Atomic BOOL _Value; } _actionsWereAdded;
    id /* block */ _completion;
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)resolve;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0 queue:(id)a1;
- (id /* block */)trackAction:(id /* block */)a0;
- (id /* block */)trackGuardedAction:(id /* block */)a0 fallbackQueue:(id)a1;
- (id /* block */)trackStrictAction:(id /* block */)a0;

@end
