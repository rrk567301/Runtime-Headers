@class NSArray, NSString, GKSession, GKVoiceChatSession;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate>

@property (retain, nonatomic) GKSession *gkSession;
@property (retain, nonatomic) GKVoiceChatSession *gkVoiceChatSession;
@property (copy) id /* block */ playerStateUpdateHandler;
@property (retain) NSArray *players;
@property (copy) id /* block */ playerVoiceChatStateDidChangeHandler;
@property (readonly, copy) NSString *name;
@property (getter=isActive) BOOL active;
@property float volume;

+ (BOOL)isVoIPAllowed;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)playerIDs;
- (void)gkVoiceChatSession:(id)a0 stateUpdate:(unsigned long long)a1 forPeer:(id)a2;
- (id)initChat:(id)a0 withSession:(id)a1 players:(id)a2;
- (void)setPlayer:(id)a0 muted:(BOOL)a1;
- (void)setMute:(BOOL)a0 forPlayer:(id)a1;

@end
