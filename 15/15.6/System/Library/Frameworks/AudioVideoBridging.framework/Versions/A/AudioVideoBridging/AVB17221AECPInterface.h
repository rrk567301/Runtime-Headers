@class NSMutableDictionary, NSMutableArray;
@protocol AVB17221AECPClient;

@interface AVB17221AECPInterface : AVB1722ControlInterface {
    NSMutableDictionary *_commandHandlers;
    NSMutableDictionary *_responseHandlers;
    unsigned short _nextSequenceID;
    char _monitorMode;
    id<AVB17221AECPClient> _monitorModeDelegate;
    NSMutableArray *_pendingResponses;
}

+ (id)AECPInterfaceWithInterfaceNamed:(id)a0;
+ (id)IOClassName;
+ (char)removeFromInterfaceNamed:(id)a0 error:(id *)a1;
+ (id)AECPInterfaceWithInterface:(id)a0;
+ (char)addToInterfaceNamed:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (void)serviceTerminated;
- (void)_enableMonitorModeWithDelegate:(id)a0;
- (void)_disableMonitorMode;
- (void)aaCommandTimeoutHandler:(id)a0;
- (void)aemCommandTimeoutHandler:(id)a0;
- (void)avcCommandTimeoutHandler:(id)a0;
- (void)receivedControlFrameWithInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; unsigned char x7[6]; unsigned char x8[6]; } *)a0 andPayload:(char *)a1 ofLength:(unsigned long long)a2;
- (void)removeCommandHandlerForEntityID:(unsigned long long)a0;
- (void)removeResponseHandlerForControllerEntityID:(unsigned long long)a0;
- (void)scheduleAATimeoutWithPendingResponse:(id)a0;
- (void)scheduleAEMTimeoutWithPendingResponse:(id)a0;
- (void)scheduleAVCTimeoutWithPendingResponse:(id)a0;
- (void)scheduleVendorUniqueWithTimeout:(long long)a0 WithPendingResponse:(id)a1;
- (char)sendAAMessage:(id)a0 toMACAddress:(id)a1 isResponse:(char)a2 error:(id *)a3;
- (char)sendAASyncCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendAEMCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendAEMMessage:(id)a0 toMACAddress:(id)a1 isResponse:(char)a2 error:(id *)a3;
- (char)sendAEMResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (char)sendAEMSyncCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendAddressAccessCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendAddressAccessResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (char)sendCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendLegacyAVCCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendLegacyAVCMessage:(id)a0 toMACAddress:(id)a1 isResponse:(char)a2 error:(id *)a3;
- (char)sendLegacyAVCResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (char)sendLegacyAVCSyncCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (char)sendVendorUniqueCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (char)sendVendorUniqueCommand:(id)a0 toMACAddress:(id)a1 expectResponseWithinTimeout:(long long)a2 completionHandler:(id /* block */)a3;
- (char)sendVendorUniqueMessage:(id)a0 toMACAddress:(id)a1 isResponse:(char)a2 error:(id *)a3;
- (char)sendVendorUniqueResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (char)setCommandHandler:(id)a0 forEntityID:(unsigned long long)a1;
- (char)setResponseHandler:(id)a0 forControllerEntityID:(unsigned long long)a1;
- (void)vendorCommandTimeout:(long long)a0 handler:(id)a1;

@end
