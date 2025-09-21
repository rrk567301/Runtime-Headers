@class NSArray, NSString, GKViceroyVoiceChat;

@interface GKVoiceChat : NSObject <GKViceroyVoiceChatStateUpdateDelegate>

@property (retain, nonatomic) GKViceroyVoiceChat *gkVoiceChat;
@property (copy) id /* block */ playerStateUpdateHandler;
@property (retain) NSArray *players;
@property (copy) id /* block */ playerVoiceChatStateDidChangeHandler;
@property (readonly, copy) NSString *name;
@property (getter=isActive) char active;
@property float volume;

+ (char)isVoIPAllowed;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithViceroyVoiceChat:(id)a0 players:(id)a1;
- (id)playerIDs;
- (void)setMute:(char)a0 forPlayer:(id)a1;
- (void)setPlayer:(id)a0 muted:(char)a1;
- (void)stateUpdate:(long long)a0 forPlayerID:(id)a1;

@end
