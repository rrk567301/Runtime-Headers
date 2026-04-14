@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SCRIsolatedActivityScheduler : SCRActivityScheduler {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableDictionary *_lock_timerForTask;
}

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (void)submitActivity:(id)a0;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTargetQueue:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)completeActivityWithIdentifier:(id)a0;
- (void)_timerFiredForActivity:(id)a0;

@end
