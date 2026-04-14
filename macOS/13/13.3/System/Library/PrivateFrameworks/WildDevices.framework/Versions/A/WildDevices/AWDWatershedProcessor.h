@class NSMutableData, AWDHippoLink;

@interface AWDWatershedProcessor : NSObject <AWDProcessorProtocol> {
    char *_rxPktMem;
    char *_txPktMem;
}

@property (weak) AWDHippoLink *link;
@property (retain) NSMutableData *receiveBuffer;
@property unsigned short maxPayloadLen;

+ (void)initialize;

- (void).cxx_destruct;
- (void)terminate;
- (void)handleData:(id)a0;
- (void)appendPacket:(id)a0 forPort:(unsigned short)a1 withData:(id)a2;
- (Class)classForChannel:(unsigned short)a0;
- (id)initWithLink:(id)a0;
- (void)writeData:(id)a0 forPort:(unsigned short)a1;

@end
