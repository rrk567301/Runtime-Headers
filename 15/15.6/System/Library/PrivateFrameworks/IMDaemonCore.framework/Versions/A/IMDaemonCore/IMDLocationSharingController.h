@class FMFSession, FindMyLocateSession;

@interface IMDLocationSharingController : NSObject {
    FMFSession *_session;
}

@property (retain, nonatomic) FindMyLocateSession *fmlSession;

+ (id)sharedInstance;
+ (void)_addLocationShareItemToMatchingChats:(id)a0 handleID:(id)a1 hasStoredItem:(char)a2 broadcastChanges:(char)a3;
+ (void)addLocationShareItemToMatchingChats:(id)a0;

- (void)dealloc;
- (id)init;
- (void)didFailToHandleMappingPacket:(id)a0 error:(id)a1;
- (void)didStartAbilityToGetLocationForHandle:(id)a0;
- (void)didStartSharingMyLocationWithHandle:(id)a0;
- (void)didStopAbilityToGetLocationForHandle:(id)a0;
- (void)didStopSharingMyLocationWithHandle:(id)a0;
- (void)sendMappingPacket:(id)a0 toHandle:(id)a1 account:(id)a2;
- (void)_configureFindMyLocateSession;
- (void)_initializeFindMySessionIfInAllowedProcess;
- (void)_setUpFindMyLocateSessionCallbacks;
- (void)_startFMLSessionMonitoring;
- (void)_forwardMappingPacket:(id)a0 toID:(id)a1 account:(id)a2;
- (void)_generateLocationSharingItemWithHandleID:(id)a0 direction:(long long)a1 action:(long long)a2;
- (void)_postFMLFriendshipChangeForHandleID:(id)a0 handleType:(long long)a1 updateType:(long long)a2 isFromMessages:(char)a3;
- (void)receivedIncomingLocationSharePacket:(id)a0;

@end
