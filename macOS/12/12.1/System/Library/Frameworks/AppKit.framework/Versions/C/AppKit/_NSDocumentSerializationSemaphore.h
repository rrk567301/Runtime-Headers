@class NSObject;
@protocol OS_dispatch_semaphore;

@interface _NSDocumentSerializationSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *sema;
    unsigned long long timeout;
    id /* block */ timeoutHandler;
}

- (void)dealloc;
- (id)init;
- (void)signal;
- (void)wait;
- (id)initWithTimeout:(double)a0 handler:(id /* block */)a1;

@end
