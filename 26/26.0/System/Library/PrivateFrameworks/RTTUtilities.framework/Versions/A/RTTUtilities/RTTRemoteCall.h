@class NSObject, NSMutableDictionary, RPCompanionLinkDevice, RPCompanionLinkClient, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RTTRemoteCall : RTTCall {
    NSMutableArray *_devices;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic) RPCompanionLinkClient *discoveryClient;
@property (retain, nonatomic) NSMutableDictionary *messagingClients;
@property (retain, nonatomic) RPCompanionLinkDevice *pairedCallDevice;

- (void)addDevice:(id)a0;
- (void)start;
- (void)stop;
- (BOOL)isLocallyHosted;
- (void)removeDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCall:(id)a0;
- (void)sendString:(id)a0;
- (BOOL)_rapportDevice:(id)a0 matchesID:(id)a1 orAlternateID:(id)a2;
- (void)callDidReceiveText:(id)a0 forUtterance:(id)a1;
- (id)newRapportClientWithDestinationDevice:(id)a0;
- (id)rapportClientForDevice:(id)a0;
- (void)resetRapportClientForDevice:(id)a0 invalidate:(BOOL)a1;
- (id)responseForRequest:(id)a0 options:(id)a1;
- (void)sendCallIDChallengeToDevice:(id)a0;
- (void)sendCallIDChallengeToDeviceId:(id)a0 orAlternateId:(id)a1;
- (void)updateCallWithRemoteFailure;

@end
