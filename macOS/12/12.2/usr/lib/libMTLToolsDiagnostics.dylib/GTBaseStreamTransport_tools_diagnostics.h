@class NSData;
@protocol GTVMBuffer;

@interface GTBaseStreamTransport_tools_diagnostics : GTTransport_tools_diagnostics {
    struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *_tmu;
    id<GTVMBuffer> _messageBuffer;
    void *_messageBufferWritePtr;
    unsigned long long _bytesToRead;
    struct iovec { void *iov_base; unsigned long long iov_len; } _iov[3];
    NSData *_buffers[3];
    struct dispatch_semaphore_s { } *_sendSema;
    struct dispatch_queue_s { } *_relayQueue;
    struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *_relayTmu;
}

- (void)dealloc;
- (id)init;
- (void)_invalidate;
- (long long)_sendMessage:(id)a0 error:(id *)a1;
- (void)_scheduleInvalidation:(id)a0;
- (BOOL)_packMessage:(id)a0 error:(id *)a1;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (long long)_performRead:(void *)a0 size:(unsigned long long)a1;
- (long long)_syncTmuToHeader:(struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *)a0 ioBlock:(id /* block */)a1;
- (void)_unpackAndDispatchMessage;
- (void)_allocateMessageBuffer;
- (void)_clearBuffers;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (void)_waitEAGAIN;
- (long long)_writeBuffers:(id *)a0;
- (long long)_relayBufferInner:(const void *)a0 size:(unsigned long long)a1;
- (long long)_readAndAccumulate;
- (long long)_relayBuffer:(const void *)a0 size:(unsigned long long)a1;

@end
