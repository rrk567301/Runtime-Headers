@class MRPlaybackSession, MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;
@property (retain, nonatomic) MRPlaybackSessionMigrateRequest *request;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithPlaybackSession:(id)a0 request:(id)a1;

@end
