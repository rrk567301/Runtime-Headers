@class GTSharedMemoryTransport_replayer, NSObject;
@protocol OS_dispatch_source;

@interface GTBaseSocketTransport_replayer : GTBaseStreamTransport_replayer {
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSourceIsSuspended;
    BOOL _scheduledReadOnWritableSocket;
}

@property (readonly, nonatomic) GTSharedMemoryTransport_replayer *smTransport;

- (BOOL)connected;
- (void)_invalidate;
- (id)init;
- (void)_destroySharedMemoryTransport;
- (unsigned int)_nextMessageSerial;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (void)_readAndAccumulateLoop;
- (void)_waitEAGAIN;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (void)closeSocketDescriptor;
- (id)createNewSharedMemoryTransport;
- (id)createNewSharedMemoryTransportWithURL:(id)a0;
- (void)destroySharedMemoryTransport;
- (BOOL)relayMessageOverSharedMemoryTransport:(id)a0 error:(id *)a1;
- (void)runWithSocket:(int)a0;
- (void)scheduleReadOnWritableSocket;
- (void)setPrioritizeOutgoingMessages:(BOOL)a0;

@end
