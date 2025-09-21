@class MRPlaybackSession, MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;
@property (retain, nonatomic) MRPlaybackSessionMigrateRequest *request;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithPlaybackSession:(id)a0 request:(id)a1;

@end
