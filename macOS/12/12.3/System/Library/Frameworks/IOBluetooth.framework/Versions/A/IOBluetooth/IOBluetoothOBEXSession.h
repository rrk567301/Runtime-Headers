@class IOBluetoothRFCOMMChannel, IOBluetoothDevice;

@interface IOBluetoothOBEXSession : OBEXSession <IOBluetoothRFCOMMChannelDelegate> {
    char *outBuffer;
    unsigned long long bufferSize;
    unsigned long long currentOffsetInBuffer;
    BOOL waitingForRfcommSpace;
    unsigned int mOpenConnectionTimeout;
    SEL mOpenConnectionSelector;
    id mOpenConnectionSelectorTarget;
    void *mOpenConnectionRefCon;
    void /* function */ *mOpenConnectionCallback;
    void *mOpenConnectionCallbackRefCon;
}

@property (retain) IOBluetoothDevice *device;
@property (retain) IOBluetoothRFCOMMChannel *rfcommChannel;
@property unsigned char channelID;
@property unsigned long long asyncSizeUpdateCount;

+ (id)withSDPServiceRecord:(id)a0;
+ (id)withDevice:(id)a0 channelID:(unsigned char)a1;
+ (id)withIncomingRFCOMMChannel:(id)a0 eventSelector:(SEL)a1 selectorTarget:(id)a2 refCon:(void *)a3;

- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (BOOL)isSessionTargetAMac;
- (id)getDevice;
- (unsigned char)hasOpenTransportConnection;
- (void)setOpenTransportConnectionAsyncSelector:(SEL)a0 target:(id)a1 refCon:(void *)a2;
- (int)closeTransportConnection;
- (int)sendDataToTransport:(void *)a0 dataLength:(unsigned long long)a1;
- (int)openTransportConnection:(SEL)a0 selectorTarget:(id)a1 refCon:(void *)a2;
- (void)rfcommChannelWriteComplete:(id)a0 refcon:(void *)a1 status:(int)a2 bytesWritten:(unsigned long long)a3;
- (void)rfcommChannelWriteComplete:(id)a0 refcon:(void *)a1 status:(int)a2;
- (void)rfcommChannelData:(id)a0 data:(void *)a1 length:(unsigned long long)a2;
- (void)rfcommChannelQueueSpaceAvailable:(id)a0;
- (void)rfcommChannelOpenComplete:(id)a0 status:(int)a1;
- (void)rfcommChannelClosed:(id)a0;
- (id)initWithSDPServiceRecord:(id)a0;
- (id)initWithDevice:(id)a0 channelID:(unsigned char)a1;
- (id)initWithIncomingRFCOMMChannel:(id)a0 eventSelector:(SEL)a1 selectorTarget:(id)a2 refCon:(void *)a3;
- (int)sendBufferTroughChannel;
- (void)restartTransmission;
- (unsigned char)getRFCOMMChannelID;
- (id)getRFCOMMChannel;
- (void)setOBEXSessionOpenConnectionCallback:(void /* function */ *)a0 refCon:(void *)a1;

@end
