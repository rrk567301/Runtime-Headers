@class OS_dispatch_queue, NSString, NSArray;

@interface Sharing.AskToAirDropReceiverController : NSObject {
    void /* function */ nearbyDevicesDisplayName;
    void /* function */ stateChangedHandler;
    void /* function */ connectionStateChangedHandler;
    void /* function */ pendingOrActiveConnectionsChangedHandler;
    void /* function */ nearbyDeviceCloseChangedHandler;
    void /* function */ errorHandler;
    void /* function */ connectedNearbyDeviceNames;
    void /* function */ sharingName;
    void /* unknown type, empty encoding */ airDropClient;
    void /* unknown type, empty encoding */ privacyRemoteDeviceNames;
}

@property (nonatomic, readonly) OS_dispatch_queue *queue;
@property (nonatomic) BOOL isNearbyDeviceClose;
@property (nonatomic) BOOL hasPendingOrActiveConnections;
@property (nonatomic) BOOL isLegacyMode;
@property (nonatomic, copy) NSString *nearbyDevicesDisplayName;
@property (nonatomic) long long connectionState;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (nonatomic, copy) id /* block */ connectionStateChangedHandler;
@property (nonatomic, copy) id /* block */ pendingOrActiveConnectionsChangedHandler;
@property (nonatomic, copy) id /* block */ nearbyDeviceCloseChangedHandler;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) BOOL hasSeenPrivacyPrompt;
@property (nonatomic, copy) NSArray *connectedNearbyDeviceNames;
@property (nonatomic, copy) NSString *sharingName;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchSharingNameWithCompletion:(id /* block */)a0;
- (void)connectToAllNearbyDevices;
- (void)disconnectFromAllNearbyDevices;
- (void)fetchPrivacyPromptInformationWithCompletion:(id /* block */)a0;

@end
