@class NSString;
@protocol MIBUNWServerDeviceDelegate;

@interface MIBUNWServerDevice : MIBUNWDevice <MIBUNWConnectionDelegate> {
    NSString *_hostAddress;
    NSString *_hostPort;
    NSString *_interfaceName;
    id<MIBUNWServerDeviceDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (void)checkIn;
- (void)_handleIncomingMessage:(id)a0;
- (BOOL)connect;
- (void).cxx_destruct;
- (void)_processPendingMessages:(BOOL)a0;
- (void)checkOutWithError:(id)a0 withSummary:(id)a1;
- (id)initWithHostAddress:(id)a0 hostPort:(id)a1 interfaceName:(id)a2 connectOnDemand:(BOOL)a3 statusDelegate:(id)a4;
- (void)pingWithPayload:(id)a0;
- (void)unicastConnection:(id)a0 didReceiveMessage:(id)a1;
- (void)unicastConnectionDidClose:(id)a0 withError:(id)a1;
- (void)unicastConnectionDidOpen:(id)a0;

@end
