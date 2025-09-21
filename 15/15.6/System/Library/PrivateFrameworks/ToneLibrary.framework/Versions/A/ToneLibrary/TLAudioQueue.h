@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TLAudioQueue : NSObject {
    NSString *_assumeRunningOnAudioQueueThreadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly) TLAudioQueue *sharedAudioQueue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_underlyingSerialQueue;

- (void).cxx_destruct;
- (id)_init;
- (void)performTaskWithBlock:(id /* block */)a0;
- (char)_shouldAssumeRunningOnAudioQueue;
- (void)assertNotRunningOnAudioQueue;
- (void)assertRunningOnAudioQueue;
- (void)performSynchronousTaskWithBlock:(id /* block */)a0;
- (void)performSynchronousTaskWithOptions:(unsigned long long)a0 block:(id /* block */)a1;

@end
