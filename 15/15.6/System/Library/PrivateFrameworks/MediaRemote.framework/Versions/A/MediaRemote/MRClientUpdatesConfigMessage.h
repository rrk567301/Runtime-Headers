@class NSArray;

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic) char nowPlayingUpdates;
@property (readonly, nonatomic) char artworkUpdates;
@property (readonly, nonatomic) char volumeUpdates;
@property (readonly, nonatomic) char keyboardUpdates;
@property (readonly, nonatomic) char outputDeviceUpdates;
@property (readonly, nonatomic) char systemEndpointUpdates;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithNowPlayingUpdates:(char)a0 artworkUpdates:(char)a1 volumeUpdates:(char)a2 keyboardUpdates:(char)a3 outputDeviceUpdates:(char)a4 systemEndpointUpdates:(char)a5 subscribedPlayerPaths:(id)a6;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
