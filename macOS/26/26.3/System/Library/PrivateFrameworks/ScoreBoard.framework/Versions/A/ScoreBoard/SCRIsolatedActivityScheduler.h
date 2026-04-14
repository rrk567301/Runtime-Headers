@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SCRIsolatedActivityScheduler : SCRActivityScheduler {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableDictionary *_lock_timerForTask;
}

- (id)succinctDescriptionBuilder;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)submitActivity:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTargetQueue:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (void)completeActivityWithIdentifier:(id)a0;
- (void)_timerFiredForActivity:(id)a0;

@end
