@class NSXPCInterface, NSXPCConnection;
@protocol SMPairingEventsListener, SMDPairingProtocol;

@interface SMPairing_Client : NSObject <SMPairingEventsListener>

@property (weak) id<SMPairingEventsListener> delegate;
@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id<SMDPairingProtocol> daemon;

+ (id)eventsListenerInterface;
+ (BOOL)newPairingEnabled;

- (void)disconnect;
- (void)tearDown;
- (id)initWithDelegate:(id)a0;
- (void)connect;
- (void).cxx_destruct;
- (void)handleXPCError:(id)a0;
- (void)pairingCompletedWithSystem:(id)a0;
- (void)pairingFailedWithError:(id)a0;
- (void)pairingInProgressWithSystem;
- (void)pairingStartedWithCode:(id)a0;
- (void)startPairing;
- (void)stopPairing;

@end
