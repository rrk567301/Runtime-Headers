@class SASProximitySessionTransport, CUMessageSession, NSObject;
@protocol OS_dispatch_queue, SASProximitySessionDelegate;

@interface SASProximitySession : NSObject

@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain) SASProximitySessionTransport *transport;
@property id<SASProximitySessionDelegate> delegate;
@property (retain) CUMessageSession *sharingMessageSession;
@property (getter=isConnected) char connected;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)handleAction:(id)a0;
- (id)sendAction:(id)a0;
- (id)actionFromData:(id)a0;
- (void)receivedAction:(id)a0 response:(id /* block */)a1;

@end
