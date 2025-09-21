@class PKSharingChannelHandle, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKSharingChannelHandleMessageWaiter : NSObject {
    double _timeout;
    id /* block */ _messageHandler;
    id /* block */ _invalidationHandler;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKSharingChannelHandle *_handle;
    char _isHandlingMessage;
    char _isPendingInvalidation;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (void)_startTimeoutTimer;
- (void)startForHandle:(id)a0;
- (void)_endTimeoutTimer;
- (void)_invalidateWithShouldNotify:(char)a0 fromTimeout:(char)a1;
- (void)_messageReceived;
- (id)initWithTimeout:(double)a0 messageHandler:(id /* block */)a1 invalidationHandler:(id /* block */)a2 replyQueue:(id)a3;

@end
