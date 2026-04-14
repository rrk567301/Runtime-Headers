@class NSURL, NSMutableArray, GTBaseStreamTransport_tools_diagnostics;

@interface GTSharedMemoryTransport_tools_diagnostics : GTBaseStreamTransport_tools_diagnostics {
    void *_outgoingShmem;
    void *_incomingShmem;
    void *_masterSMRegion;
    void *_outgoingBuffer;
    void *_incomingBuffer;
    GTBaseStreamTransport_tools_diagnostics *_relayTransport;
    void /* function */ *_consumeBytesIMP;
    SEL _consumeBytesSEL;
    unsigned int _currentPacketBytesLeft;
    int _mode;
    NSMutableArray *_bufferedMessages;
    char _sendName[64];
    char _receiveName[64];
    unsigned long long _sm_region_size_small;
    unsigned long long _sm_region_size_large;
}

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL deferred;

- (void)dealloc;
- (id)init;
- (void)setUrl:(id)a0;
- (void)_invalidate;
- (id)connect;
- (id)initWithMode:(int)a0;
- (BOOL)connected;
- (unsigned int)_nextMessageSerial;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2 replyQueue:(struct dispatch_queue_s { } *)a3 timeout:(unsigned long long)a4 handler:(id /* block */)a5;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (void)_waitEAGAIN;
- (id)initWithMode:(int)a0 initialMessageSerial:(unsigned int)a1;
- (void)_accumulateMessageBytes;
- (void)_relayPacket;
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)a0;
- (void *)_mapSharedMemoryFile:(int)a0 size:(unsigned long long)a1 error:(id *)a2;
- (void)_dequeueIncomingMessages;
- (id)_getSharedMemoryNameWithSuffix:(id)a0;
- (BOOL)_initializeSMRegion:(struct sm_region_header **)a0 size:(unsigned long long)a1 name:(const char *)a2 error:(id *)a3;
- (void)_setupIOBuffers;
- (BOOL)_createAndRunSources:(id *)a0;
- (BOOL)_openSMRegion:(struct sm_region_header **)a0 size:(unsigned long long)a1 name:(const char *)a2 error:(id *)a3;
- (BOOL)_serverConnect:(id *)a0;
- (BOOL)_clientConnect:(id *)a0;
- (void)_tearDownSharedMemory;
- (unsigned long long)_computeBytesAvailableToRead;
- (unsigned long long)_computeBytesAvailableToWrite;
- (void)_copyToSM:(const void *)a0 size:(long long)a1;
- (void)_updateReaderOffset:(unsigned long long)a0;
- (void)_copyFromSM:(void *)a0 size:(unsigned long long)a1;
- (void)_dequeuePacket;
- (void)setRelayTransport:(id)a0;

@end
