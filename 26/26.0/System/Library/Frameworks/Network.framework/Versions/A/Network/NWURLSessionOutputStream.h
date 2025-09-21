@class NSObject, NSError, NSURLSessionStreamTask, NSRunLoop, NSMutableArray;
@protocol OS_dispatch_data, NSStreamDelegate, OS_dispatch_semaphore;

@interface NWURLSessionOutputStream : NSOutputStream {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    BOOL _opened;
    BOOL _writing;
    BOOL _pendingClose;
    unsigned short _writeWaiters;
    NSURLSessionStreamTask *_streamTask;
    id<NSStreamDelegate> _streamDelegate;
    NSRunLoop *_runLoop;
    NSMutableArray *_runLoopModes;
    NSObject<OS_dispatch_semaphore> *_writeSemaphore;
    NSObject<OS_dispatch_data> *_pendingData;
    NSError *_error;
}

- (BOOL)hasSpaceAvailable;
- (void)setDelegate:(id)a0;
- (id)propertyForKey:(id)a0;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)open;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)streamError;
- (id)delegate;
- (void)close;
- (void).cxx_destruct;

@end
