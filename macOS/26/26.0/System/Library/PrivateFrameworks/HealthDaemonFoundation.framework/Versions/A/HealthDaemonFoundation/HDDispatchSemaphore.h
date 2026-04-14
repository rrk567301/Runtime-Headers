@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface HDDispatchSemaphore : NSObject <HDSemaphore> {
    unsigned long long _options;
    NSString *_debugIdentifier;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _waitCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _signpost;
    BOOL _isHighCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)signal;
- (void)wait;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0 options:(unsigned long long)a1 debugIdentifier:(id)a2;
- (void)waitWithPriority:(long long)a0;

@end
