@class NSArray, NSMutableDictionary, NSString;
@protocol AXHAServerDelegate;

@interface AXHAServer : AXHeardServer <AXHARemoteUpdateProtocol> {
    NSMutableDictionary *_responseBlocks;
}

@property (retain, nonatomic) NSArray *availableHearingAids;
@property (retain, nonatomic) NSArray *availableControllers;
@property (nonatomic) BOOL hearingAidConnectedOrReachable;
@property (nonatomic) BOOL hearingAidReachableForAudioTransfer;
@property (retain, nonatomic) NSMutableDictionary *updates;
@property (readonly, nonatomic) BOOL hearingAidReachable;
@property (weak, nonatomic) id<AXHAServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetConnection;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)startServerWithDelegate:(id)a0;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)availableDevicesDidUpdate:(id)a0;
- (void)deviceDidUpdateProperty:(id)a0;
- (void)liveListenDidUpdate:(id)a0;
- (void)registerUpdateBlock:(id)a0 forIdentier:(unsigned long long)a1 withListener:(id)a2;
- (BOOL)updateReachabilityAndWait:(BOOL)a0;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 forDeviceID:(id)a2;
- (void)unregisterUpdateListener:(id)a0;
- (void)registerListener:(id)a0 forAvailableDeviceHandler:(id /* block */)a1;
- (void)registerListener:(id)a0 forPropertyUpdateHandler:(id /* block */)a1;
- (void)connectToControllerWithID:(id)a0;
- (void)requestHearingAidConnectionWithReason:(long long)a0;
- (void)cancelHearingAidConnectionRequest;
- (void)registerListener:(id)a0 forLiveListenLevelsHandler:(id /* block */)a1;
- (void)startLiveListen;
- (void)stopLiveListen;

@end
