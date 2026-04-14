@class NSURL, GTBaseStreamTransport_replayer, NSMutableArray;

@interface GTSharedMemoryTransport_replayer : GTBaseStreamTransport_replayer {
    void *_outgoingShmem;
    void *_incomingShmem;
    void *_masterSMRegion;
    void *_outgoingBuffer;
    void *_incomingBuffer;
    GTBaseStreamTransport_replayer *_relayTransport;
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

- (BOOL)connected;
- (void)setUrl:(id)a0;
- (void)dealloc;
- (void)_invalidate;
- (id)init;
- (id)initWithMode:(int)a0;
- (id)connect;
- (BOOL)_clientConnect:(id *)a0;
- (void)_copyToSM:(const void *)a0 size:(long long)a1;
- (id)_getSharedMemoryNameWithSuffix:(id)a0;
- (BOOL)_serverConnect:(id *)a0;
- (void)_setupIOBuffers;
- (void)_accumulateMessageBytes;
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)a0;
- (unsigned long long)_computeBytesAvailableToRead;
- (unsigned long long)_computeBytesAvailableToWrite;
- (void)_copyFromSM:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_createAndRunSources:(id *)a0;
- (void)_dequeueIncomingMessages;
- (void)_dequeuePacket;
- (BOOL)_initializeSMRegion:(struct sm_region_header **)a0 size:(unsigned long long)a1 name:(const char *)a2 error:(id *)a3;
- (void *)_mapSharedMemoryFile:(int)a0 size:(unsigned long long)a1 error:(id *)a2;
- (unsigned int)_nextMessageSerial;
- (BOOL)_openSMRegion:(struct sm_region_header **)a0 size:(unsigned long long)a1 name:(const char *)a2 error:(id *)a3;
- (long long)_read:(void *)a0 size:(unsigned long long)a1;
- (void)_relayPacket;
- (void)_tearDownSharedMemory;
- (void)_updateReaderOffset:(unsigned long long)a0;
- (void)_waitEAGAIN;
- (long long)_write:(const void *)a0 size:(unsigned long long)a1;
- (id)initWithMode:(int)a0 initialMessageSerial:(unsigned int)a1;
- (BOOL)send:(id)a0 inReplyTo:(id)a1 error:(id *)a2 replyQueue:(id)a3 timeout:(unsigned long long)a4 handler:(id /* block */)a5;
- (void)setRelayTransport:(id)a0;

@end
