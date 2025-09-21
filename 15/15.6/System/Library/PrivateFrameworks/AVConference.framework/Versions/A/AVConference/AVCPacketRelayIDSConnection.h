@class AVCPacketFilter, IDSDatagramChannel, IDSService;

@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol> {
    IDSDatagramChannel *_datagramChannel;
    IDSService *_packetRelayService;
}

@property char isResumed;
@property (readonly) unsigned char type;
@property char isDemuxNeeded;
@property (copy) id /* block */ readHandler;
@property (retain) AVCPacketFilter *packetFilter;

- (void)dealloc;
- (int)start;
- (int)stop;
- (void)readyToRead;
- (id)initWithIDSDestination:(id)a0;
- (id)initWithIDSSocketDescriptor:(unsigned short)a0;
- (char)sendData:(const void *)a0 size:(unsigned int)a1 error:(id *)a2;

@end
