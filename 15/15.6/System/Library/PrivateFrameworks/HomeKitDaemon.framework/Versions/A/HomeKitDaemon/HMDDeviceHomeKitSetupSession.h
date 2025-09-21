@class HMDXPCClientConnection;

@interface HMDDeviceHomeKitSetupSession : HMFObject

@property (getter=isFirstResidentForHome) char firstResidentForHome;
@property char hasFailedRelayAttempt;
@property (readonly) char shouldRelayRequest;
@property (readonly, weak) HMDXPCClientConnection *clientConnection;

- (void).cxx_destruct;
- (id)initWithFirstResidentForHome:(char)a0 clientConnection:(id)a1;
- (void)markHasFailedRelayAttempt;

@end
