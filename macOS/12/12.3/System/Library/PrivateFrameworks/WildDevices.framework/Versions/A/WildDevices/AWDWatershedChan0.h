@class NSMutableData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWDWatershedChan0 : AWDHippoChannel {
    NSObject<OS_dispatch_queue> *_channelQueue;
    NSObject<OS_dispatch_source> *_timeoutTimerRef;
    BOOL _isTimeoutRunning;
    unsigned char _pktSeqNum;
    unsigned char _rxPktMem[68];
    int _protoState;
    unsigned short _numChannels;
    NSMutableArray *_enumeratedChans;
}

@property (retain) NSMutableData *receiveBuffer;

+ (void)initialize;
+ (id)featureName;
+ (id)featureDescription;

- (void).cxx_destruct;
- (void)terminate;
- (void)processData:(id)a0;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (id)initWithLink:(id)a0 withPort:(unsigned short)a1;
- (void)processState:(id)a0;
- (void)processDataSync:(id)a0;
- (void)sendMessage:(struct watershed_ch0_hdr_s { unsigned char x0; unsigned char x1; } *)a0 length:(unsigned long long)a1 withID:(unsigned char)a2 withType:(unsigned char)a3;

@end
