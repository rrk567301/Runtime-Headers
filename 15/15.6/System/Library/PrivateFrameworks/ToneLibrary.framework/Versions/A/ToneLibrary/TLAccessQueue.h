@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TLAccessQueue : NSObject {
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 appendUUIDToLabel:(char)a1;
- (void)_performSynchronousBlockInSerialQueue:(id /* block */)a0;
- (void)assertNotRunningInAccessQueue;
- (void)performAsynchronousBlock:(id /* block */)a0;
- (void)performSynchronousBlock:(id /* block */)a0;

@end
