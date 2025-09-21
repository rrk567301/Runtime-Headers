@class MRSendCommandResultStatus, MRPlayerPath, MRPlaybackSessionRequest, NSError;

@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionRequest *request;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRSendCommandResultStatus *setPlaybackSessionCommandStatus;

- (unsigned long long)type;
- (id)initWithRequest:(id)a0 error:(id)a1 setPlaybackSessionCommandStatus:(id)a2 playerPath:(id)a3;

@end
