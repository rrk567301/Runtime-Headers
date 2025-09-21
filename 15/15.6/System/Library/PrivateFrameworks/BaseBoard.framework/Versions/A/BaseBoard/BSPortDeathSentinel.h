@class NSString, BSMachPortSendRight, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable> {
    BSMachPortSendRight *_sendRight;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_source;
    char _activated;
    char _invalidated;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorSendRight:(id)a0 withHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activateWithHandler:(id /* block */)a0;
- (id)initWithSendRight:(id)a0;

@end
