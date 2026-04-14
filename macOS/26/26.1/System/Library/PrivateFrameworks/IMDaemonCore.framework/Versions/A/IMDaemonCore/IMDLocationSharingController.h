@class FMFSession, FindMyLocateSession;

@interface IMDLocationSharingController : NSObject {
    FMFSession *_session;
}

@property (retain, nonatomic) FindMyLocateSession *fmlSession;

+ (id)sharedInstance;
+ (void)addLocationShareItemToMatchingChats:(id)a0;
+ (void)_addLocationShareItemToMatchingChats:(id)a0 handleID:(id)a1 hasStoredItem:(BOOL)a2 broadcastChanges:(BOOL)a3;

- (void)didStopAbilityToGetLocationForHandle:(id)a0;
- (void)_generateLocationSharingItemWithHandleID:(id)a0 direction:(long long)a1 action:(long long)a2;
- (void)receivedIncomingLocationSharePacket:(id)a0;
- (void)_startFMLSessionMonitoring;
- (void)_postFMLFriendshipChangeForHandleID:(id)a0 handleType:(long long)a1 updateType:(long long)a2 isFromMessages:(BOOL)a3;
- (void)_configureFindMyLocateSession;
- (void)dealloc;
- (void)_forwardMappingPacket:(id)a0 toID:(id)a1 account:(id)a2;
- (void)sendMappingPacket:(id)a0 toHandle:(id)a1 account:(id)a2;
- (void)didStartAbilityToGetLocationForHandle:(id)a0;
- (void)didStopSharingMyLocationWithHandle:(id)a0;
- (void)didFailToHandleMappingPacket:(id)a0 error:(id)a1;
- (void)_setUpFindMyLocateSessionCallbacks;
- (void)_initializeFindMySessionIfInAllowedProcess;
- (id)init;
- (void)didStartSharingMyLocationWithHandle:(id)a0;

@end
