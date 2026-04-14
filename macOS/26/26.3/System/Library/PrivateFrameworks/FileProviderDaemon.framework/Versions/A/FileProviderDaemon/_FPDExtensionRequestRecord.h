@class NSProgress, NSObservation, NSDate, FPXPCAutomaticErrorProxy, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_log;

@interface _FPDExtensionRequestRecord : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_source> *_progressTimer;
    NSDate *_timeout;
    SEL _selector;
    NSProgress *_progress;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    id /* block */ _handler;
    NSDate *_lastEventDate;
    NSObservation *_fractionCompletedObservation;
}

@property (readonly, weak) FPXPCAutomaticErrorProxy *proxy;

- (id)description;
- (void)_setupProgressTimer;
- (void)_setupTimer:(double)a0;
- (void)cancelTimeout;
- (void).cxx_destruct;
- (void)monitorProgress:(id)a0;
- (const char *)_timeoutExpirationState;
- (void)_handleTimeout;
- (id)initWithSelector:(SEL)a0 proxy:(id)a1 timeout:(double)a2 queue:(id)a3 log:(id)a4 timeoutHandler:(id /* block */)a5;

@end
