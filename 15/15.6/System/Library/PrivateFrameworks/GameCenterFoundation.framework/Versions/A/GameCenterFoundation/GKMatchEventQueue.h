@class NSMutableDictionary, GKPlayer, NSDictionary, NSMutableArray;

@interface GKMatchEventQueue : NSObject <GKPlayerConnectionContext>

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKPlayer *hostPlayer;
@property (retain, nonatomic) NSMutableDictionary *connectionInfo;
@property (nonatomic) long long playerState;
@property (nonatomic) long long deferedPlayerState;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char counted;
@property (nonatomic) char okToSend;
@property (nonatomic) char relayInitiated;
@property (nonatomic) char hasInitRelayInfo;
@property (nonatomic) char hasUpdateRelayInfo;
@property (nonatomic) char invitedByLocalPlayer;
@property (readonly, nonatomic) char connected;
@property (readonly, nonatomic) NSDictionary *info;

- (id)init;
- (void).cxx_destruct;

@end
