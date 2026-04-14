@class NSString, NSObject, AXDispatchTimer;
@protocol OS_dispatch_queue;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol> {
    NSObject<OS_dispatch_queue> *_receivedPacketQueue;
}

@property (nonatomic) BOOL didValidateHIID;
@property (retain, nonatomic) AXDispatchTimer *communicationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)receivedData:(id)a0;
- (void)acceptConnection:(int)a0;
- (void)closeConnectionWithError:(id)a0;
- (void)didCommunicate;
- (void)sendDataChunk;
- (BOOL)outputStreamReady;
- (BOOL)sendObject:(id)a0 withSendCompletion:(id /* block */)a1;
- (void)validatePairedAid;

@end
