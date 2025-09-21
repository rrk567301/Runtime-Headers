@class NSString, NSArray, NSMutableSet, NSObject, IDSService;
@protocol OS_os_transaction, MSPSharedTripGroupSessionDelegate;

@interface MSPSharedTripGroupSession : NSObject {
    char _joined;
    NSString *_joinedFromHandle;
    NSString *_joinedFromAccountIdentifier;
    char _initiator;
    NSString *_groupID;
    unsigned long long _nbClients;
    NSMutableSet *_liveModeParticipantIdentifiers;
    IDSService *_sharingIDSService;
    NSMutableSet *_identifiers;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) char inLiveMode;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *initiatorIdentifier;
@property (copy, nonatomic) NSString *initiatorDisplayName;
@property (readonly, nonatomic) NSArray *accountIdentifiers;
@property (weak, nonatomic) id<MSPSharedTripGroupSessionDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_leaveLiveMode:(id *)a0;
- (void)addSharingWith:(id)a0;
- (id)_currentRoutePath;
- (char)_isValidParticipant:(id)a0;
- (char)_joinLiveModeFromHandle:(id)a0 fromAccountID:(id)a1 error:(id *)a2;
- (char)_sendChunkMessage:(id)a0 to:(id)a1 packet:(id)a2 options:(id)a3 error:(id *)a4;
- (void)_sharingEnded;
- (void)_sharingEndedWithError:(id)a0;
- (id)initWithService:(id)a0 groupID:(id)a1 initiator:(char)a2 initiatorIdentifier:(id)a3;
- (char)joinLiveModeFromHandle:(id)a0 fromAccountID:(id)a1 error:(id *)a2;
- (char)leaveLiveModeForced:(id *)a0;
- (char)leaveLiveModeIfNeeded:(id *)a0;
- (void)participantDidJoin:(id)a0;
- (void)participantDidLeave:(id)a0;
- (char)sendChunkedMessage:(id)a0 to:(id)a1 error:(id *)a2;
- (char)sendChunkedMessage:(id)a0 to:(id)a1 options:(id)a2 error:(id *)a3;
- (char)sendCommand:(id)a0 fromHandle:(id)a1 fromAccountID:(id)a2 error:(id *)a3;
- (char)sessionIsAliveAfterRemovingSharingIdentifiers:(id)a0;

@end
