@class NSString, _IDSSession;

@interface IDSSession : NSObject {
    _IDSSession *_internal;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uniqueIDLock;
}

@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) int socket;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *destination;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) long long invitationTimeOut;
@property (readonly, nonatomic) unsigned int sessionEndedReason;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)state;
- (id)_internal;
- (void)setPreferences:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)acceptInvitation;
- (void)cancelInvitation;
- (void)sendInvitationWithOptions:(id)a0;
- (id)initWithAccount:(id)a0 destinations:(id)a1 options:(id)a2;
- (void)endSession;
- (void)sendAllocationRequest:(id)a0;
- (void)sendInvitationWithData:(id)a0 declineOnError:(BOOL)a1;
- (void)cancelInvitationWithData:(id)a0;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)a0;
- (void)acceptInvitationWithData:(id)a0;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)a0;
- (void)reconnectSession;
- (void)endSessionWithData:(id)a0;
- (void)sendSessionMessage:(id)a0;
- (void)sendSessionMessage:(id)a0 toDestinations:(id)a1;
- (BOOL)shouldUseSocketForTransport;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)a0;
- (BOOL)sendData:(id)a0 error:(id *)a1;
- (unsigned long long)initialLinkType;
- (id)_initWithAccount:(id)a0 destinations:(id)a1 transportType:(long long)a2 uniqueID:(id)a3;
- (id)initWithAccount:(id)a0 destinations:(id)a1 transportType:(long long)a2;
- (void)sendInvitation;
- (void)sendInvitationWithData:(id)a0;
- (void)setStreamPreferences:(id)a0;
- (id)_streamPreferences;

@end
