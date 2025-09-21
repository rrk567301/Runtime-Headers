@class CRKRemoteEndpoint, NSDictionary, CRKTransportPreflightOperation, CATStateMachine, CATTransport;
@protocol CRKGrowthFunction, CRKSessionDelegate;

@interface CRKSession : NSObject {
    double mCurrentBackoffInterval;
}

@property (readonly, nonatomic) id<CRKGrowthFunction> backoffGrowthFunction;
@property (retain, nonatomic) CATStateMachine *stateMachine;
@property (retain, nonatomic) CATTransport *transport;
@property (nonatomic) double lostBeaconTimeout;
@property (nonatomic) double willLoseBeaconWarningTimeout;
@property (retain, nonatomic) CRKTransportPreflightOperation *transportPreflightOperation;
@property (weak, nonatomic) id<CRKSessionDelegate> delegate;
@property (readonly) CRKRemoteEndpoint *endpoint;
@property (nonatomic) char requiresBeacon;
@property (readonly, copy, nonatomic) NSDictionary *stateDictionary;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithEndpoint:(id)a0;
- (void)connect;
- (void)failedToConnect;
- (void)didConnect;
- (void)registerDefaults;
- (void)rejected;
- (void)lostConnection;
- (void)delegateDidBecomeNotConnectable;
- (void)enterOutOfRange;
- (void)backoffDidFinish;
- (void)cancelConnectionAttempt;
- (void)delegateConnected;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidBecomeNotConnectableAndDidLoseBeacon;
- (void)delegateDidLoseBeacon;
- (void)delegateDisconnected;
- (void)delegateInvalidated;
- (void)delegateWillLoseBeacon;
- (void)enterBackoffCanConnect;
- (void)enterNoNetwork;
- (void)exitBackoffCanConnect;
- (void)foundBeacon;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostBeacon;
- (void)processFinishedTransportPreflightOperation:(id)a0;
- (void)resetBackoff;
- (void)startPreflightingTransport:(id)a0;
- (void)stopPreflightingTransport;
- (id)studentSocketOptions;
- (void)transportPreflightOperationDidFinish:(id)a0;
- (void)tryConnecting;

@end
