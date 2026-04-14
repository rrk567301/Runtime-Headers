@class NSObject;
@protocol OS_dispatch_semaphore;

@interface _NSDocumentSerializationSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_sema;
    unsigned long long _timeout;
    id /* block */ _timeoutHandler;
    id /* block */ _recoveryHandler;
}

- (void)signal;
- (void)wait;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 handler:(id /* block */)a1;
- (id)initWithTimeout:(double)a0 timeoutHandler:(id /* block */)a1 recoveryHandler:(id /* block */)a2;
- (void)waitWithNoTimeout;

@end
