@class NSMutableData, AWDHippoLink;

@interface AWDHippoProcessor : NSObject <AWDProcessorProtocol> {
    unsigned short _maxPacketSize;
    int _rxState;
    unsigned int _ipAddress;
}

@property (weak) AWDHippoLink *link;
@property int protocol;
@property (retain) NSMutableData *receiveBuffer;

+ (void)initialize;

- (void).cxx_destruct;
- (void)terminate;
- (void)handleData:(id)a0;
- (id)initWithLink:(id)a0;
- (void)writeData:(id)a0 forPort:(unsigned short)a1 pingResponse:(BOOL)a2;
- (void)appendEscapedData:(id)a0 withBytes:(const char *)a1 length:(unsigned short)a2;
- (void)appendPacket:(id)a0 forPort:(unsigned short)a1 withData:(id)a2 pingResponse:(BOOL)a3;
- (Class)classForChannel:(unsigned short)a0;
- (void)processPacket;
- (void)resetReceive;
- (void)writeData:(id)a0 forPort:(unsigned short)a1;

@end
