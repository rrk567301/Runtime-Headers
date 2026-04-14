@class NSString, NSOutputStream, NSInputStream, NSNetService, NSMutableArray, NSMutableData, AXIDCPacket, AXIDCMessage;
@protocol AXIDCRemoteControllerDelegate;

@interface AXIDCRemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {
    AXIDCPacket *_currentPacket;
}

@property (retain, nonatomic) NSMutableData *inputBuffer;
@property (retain, nonatomic) AXIDCMessage *currentMessageInFlight;
@property (retain, nonatomic) NSNetService *service;
@property (retain, nonatomic) NSMutableArray *outputDataQueue;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSMutableData *outputBuffer;
@property (weak, nonatomic) id<AXIDCRemoteControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)name;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)initWithService:(id)a0;
- (void)resetConnection;
- (void)receivedData:(id)a0;
- (BOOL)isConnecting;
- (BOOL)sendObject:(id)a0;
- (void)enqueueData:(id)a0;
- (void)acceptConnection:(int)a0;
- (void)closeConnectionWithError:(id)a0;
- (BOOL)isSlave;
- (void)openConnectionIfNecessary;
- (void)setupStream:(id)a0;
- (void)setSecuritySettingsForStream:(id)a0;
- (void)finishedSending:(id)a0;
- (id)nextMessageInQueue;
- (void)didCommunicate;
- (void)sendDataChunk;
- (BOOL)outputStreamReady;
- (void)messageWasAcked:(id)a0;
- (BOOL)sendObject:(id)a0 withSendCompletion:(id /* block */)a1;
- (void)clearMessageQueue;

@end
