@class GTSharedMemoryTransport_tools_diagnostics;

@interface GTBaseSocketTransport_tools_diagnostics : GTBaseStreamTransport_tools_diagnostics {
    struct dispatch_source_s { } *_readSource;
    struct dispatch_source_s { } *_writeSource;
    BOOL _writeSourceIsSuspended;
    BOOL _scheduledReadOnWritableSocket;
}

@property (readonly, nonatomic) GTSharedMemoryTransport_tools_diagnostics *smTransport;

- (id)init;
- (void)_invalidate;
- (BOOL)connected;
- (unsigned int)_nextMessageSerial;
- (void)setPrioritizeOutgoingMessages:(BOOL)a0;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (void)_waitEAGAIN;
- (void)closeSocketDescriptor;
- (void)_readAndAccumulateLoop;
- (void)_destroySharedMemoryTransport;
- (id)createNewSharedMemoryTransportWithURL:(id)a0;
- (void)runWithSocket:(int)a0;
- (void)scheduleReadOnWritableSocket;
- (id)createNewSharedMemoryTransport;
- (void)destroySharedMemoryTransport;
- (BOOL)relayMessageOverSharedMemoryTransport:(id)a0 error:(id *)a1;

@end
