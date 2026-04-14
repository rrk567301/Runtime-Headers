@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, AWDHippoTransportProtocol, AWDProcessorProtocol;

@interface AWDHippoLink : NSObject {
    NSString *_transportIdName;
    id<AWDHippoTransportProtocol> _transport;
    NSMutableDictionary *_channels;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSObject<OS_dispatch_queue> *_transmitQueue;
    id<AWDProcessorProtocol> _processor;
}

@property (readonly) NSString *linkName;
@property (readonly) int linkType;
@property (readonly) unsigned long long deviceTypeID;
@property (readonly) NSString *instanceID;

+ (void)initialize;

- (void).cxx_destruct;
- (void)terminate;
- (void)writeRawData:(id)a0;
- (void)setInstanceID:(id)a0;
- (id)processor;
- (Class)classForChannel:(unsigned short)a0;
- (id)initWithSerialDevPath:(id)a0 baudRate:(int)a1 type:(int)a2;
- (id)getChannelForPort:(unsigned short)a0;
- (id)getChannels;
- (void)removeChannel:(id)a0;
- (void)writeData:(id)a0 forChannel:(id)a1;
- (void)setDeviceTypeID:(unsigned long long)a0;
- (void)serviceReceive:(id)a0;
- (void)processData:(id)a0 forPort:(unsigned short)a1;
- (void)addChannelForPort:(unsigned short)a0;
- (void)handleNewChannel:(id)a0;

@end
