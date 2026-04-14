@class NSObject, NSError, NSURLSessionStreamTask, NSRunLoop, NSMutableArray;
@protocol OS_dispatch_data, NSStreamDelegate, OS_dispatch_semaphore;

@interface NWURLSessionInputStream : NSInputStream {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    BOOL _opened;
    BOOL _reading;
    BOOL _receivedEOF;
    BOOL _signaledEOF;
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

- (void)setDelegate:(id)a0;
- (id)propertyForKey:(id)a0;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)open;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (id)streamError;
- (id)delegate;
- (void)close;
- (void).cxx_destruct;

@end
