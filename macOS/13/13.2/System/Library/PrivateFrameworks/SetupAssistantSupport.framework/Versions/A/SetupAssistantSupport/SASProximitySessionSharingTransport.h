@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport

@property (retain) CUMessageSession *messageSession;
@property (retain) CUMessageSession *actionMessageSession;

- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)sendData:(id)a0 response:(id /* block */)a1;
- (id)initWithMessageSession:(id)a0;

@end
