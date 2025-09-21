@class NSObject, NSError, NSURLSessionStreamTask, NSRunLoop, NSMutableArray;
@protocol OS_dispatch_data, NSStreamDelegate, OS_dispatch_semaphore;

@interface NWURLSessionInputStream : NSInputStream {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    char _opened;
    char _reading;
    char _receivedEOF;
    char _signaledEOF;
    unsigned short _readWaiters;
    NSURLSessionStreamTask *_streamTask;
    id<NSStreamDelegate> _streamDelegate;
    NSRunLoop *_runLoop;
    NSMutableArray *_runLoopModes;
    NSObject<OS_dispatch_semaphore> *_readSemaphore;
    unsigned long long _readSize;
    NSObject<OS_dispatch_data> *_pendingData;
    NSError *_error;
}

- (id)propertyForKey:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (char)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (char)hasBytesAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (char)setProperty:(id)a0 forKey:(id)a1;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
