@interface GKConnection : NSObject {
    struct { int x0; char *x1; int x2; unsigned int x3; } *_event;
    unsigned int _pid;
}

@property id eventDelegate;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)isRelayEnabled;
+ (id)externalAddressForSelfConnectionData:(id)a0;
+ (id)externalAddressForCDXSelfConnectionData:(id)a0;

- (void)connect;
- (id)initWithParticipantID:(id)a0;
- (struct OpaqueGCKSession { } *)gckSession;
- (unsigned int)gckPID;
- (BOOL)convertParticipantID:(id)a0 toPeerID:(id *)a1;
- (BOOL)convertPeerID:(id)a0 toParticipantID:(id *)a1;
- (void)initiateRelayWithParticipant:(id)a0 withConnectionData:(id)a1 withRelayInfo:(id)a2 didInitiate:(BOOL)a3;
- (id)getLocalConnectionDataForLocalGaming;
- (void)connectParticipantsWithConnectionData:(id)a0 withSessionInfo:(id)a1;
- (void)updateRelayWithParticipant:(id)a0 withConnectionData:(id)a1 withRelayInfo:(id)a2 didInitiate:(BOOL)a3;
- (void)getLocalConnectionDataWithCompletionHandler:(id /* block */)a0;
- (id)networkStatistics;
- (void)preRelease;
- (void)setParticipantID:(id)a0 forPeerID:(id)a1;
- (void)cancelConnectParticipant:(id)a0;
- (id)networkStatisticsDictionaryForGCKStats:(void *)a0;

@end
