@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TLAudioQueue : NSObject {
    NSString *_assumeRunningOnAudioQueueThreadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly) TLAudioQueue *sharedAudioQueue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_underlyingSerialQueue;

- (id)_init;
- (void).cxx_destruct;
- (void)performTaskWithBlock:(id /* block */)a0;
- (void)performSynchronousTaskWithBlock:(id /* block */)a0;
- (void)performSynchronousTaskWithOptions:(unsigned long long)a0 block:(id /* block */)a1;
- (void)assertRunningOnAudioQueue;
- (void)assertNotRunningOnAudioQueue;
- (BOOL)_shouldAssumeRunningOnAudioQueue;

@end
