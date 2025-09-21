@class NSArray, MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection {
    NSArray *_subscribedPlayerPaths;
}

@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (nonatomic) char registeredToNowPlayingUpdates;
@property (nonatomic) char registeredToVolumeUpdates;
@property (nonatomic) char registeredKeyboardUpdates;
@property (nonatomic) char registeredToOutputDeviceUpdates;
@property (nonatomic) char registeredToSystemEndpointUpdates;
@property (nonatomic) unsigned int voiceRecordingState;
@property (retain, nonatomic) MRCryptoPairingSession *cryptoSession;
@property (nonatomic) char cryptoEnabled;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 replyQueue:(id)a1;

@end
