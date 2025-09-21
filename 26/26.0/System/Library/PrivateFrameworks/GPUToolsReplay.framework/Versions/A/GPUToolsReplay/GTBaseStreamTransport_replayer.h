@class NSData, NSObject;
@protocol OS_dispatch_queue, GTVMBuffer, OS_dispatch_semaphore;

@interface GTBaseStreamTransport_replayer : GTTransport_replayer {
    struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *_tmu;
    id<GTVMBuffer> _messageBuffer;
    void *_messageBufferWritePtr;
    unsigned long long _bytesToRead;
    struct iovec { void *iov_base; unsigned long long iov_len; } _iov[3];
    NSData *_buffers[3];
    NSObject<OS_dispatch_semaphore> *_sendSema;
    NSObject<OS_dispatch_queue> *_relayQueue;
    struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *_relayTmu;
}

- (void)dealloc;
- (void)_invalidate;
- (id)init;
- (long long)_sendMessage:(id)a0 error:(id *)a1;
- (void)_allocateMessageBuffer;
- (void)_clearBuffers;
- (BOOL)_packMessage:(id)a0 error:(id *)a1;
- (long long)_performRead:(void *)a0 size:(unsigned long long)a1;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (long long)_readAndAccumulate;
- (long long)_relayBuffer:(const void *)a0 size:(unsigned long long)a1;
- (long long)_relayBufferInner:(const void *)a0 size:(unsigned long long)a1;
- (void)_scheduleInvalidation:(id)a0;
- (long long)_syncTmuToHeader:(struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *)a0 ioBlock:(id /* block */)a1;
- (void)_unpackAndDispatchMessage;
- (void)_waitEAGAIN;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (long long)_writeBuffers:(id *)a0;

@end
