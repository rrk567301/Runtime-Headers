@class _TtC23FindMyLocateObjCWrapper13ObjCBootstrap;

@interface FindMyLocateSession : NSObject

@property (retain, nonatomic) _TtC23FindMyLocateObjCWrapper13ObjCBootstrap *trampoline;
@property (copy) id /* block */ locationUpdateCallback;
@property (copy) id /* block */ friendshipUpdateCallback;
@property (copy) id /* block */ meDeviceUpdateCallback;

+ (char)FMFRestricted;

- (id)init;
- (void).cxx_destruct;
- (id)cachedLocationForHandle:(id)a0;
- (void)startMonitoringActiveLocationSharingDeviceChangeWithCompletion:(id /* block */)a0;
- (void)sendFriendshipOfferToHandles:(id)a0 expiration:(long long)a1 isFromGroup:(char)a2 completion:(id /* block */)a3;
- (long long)cachedCanShareLocationWithHandle:(id)a0 isFromGroup:(char)a1;
- (id)cachedFriendsFollowingMyLocation;
- (id)cachedFriendsSharingLocationsWithMe;
- (id)cachedOfferExpirationForHandle:(id)a0 groupId:(id)a1;
- (void)getActiveLocationSharingDeviceWithCompletion:(id /* block */)a0;
- (void)getFriendsFollowingMyLocationWithCompletion:(id /* block */)a0;
- (void)getFriendsSharingLocationsWithMeWithCompletion:(id /* block */)a0;
- (void)startRefreshingLocationForHandles:(id)a0 priority:(long long)a1 isFromGroup:(char)a2 reverseGeocode:(char)a3 completion:(id /* block */)a4;
- (void)startUpdatingFriendsWithInitialUpdates:(char)a0 completion:(id /* block */)a1;
- (void)stopRefreshingLocationForHandles:(id)a0 priority:(long long)a1 isFromGroup:(char)a2 completion:(id /* block */)a3;
- (void)stopSharingLocationWith:(id)a0 isFromGroup:(char)a1 completion:(id /* block */)a2;
- (void)setActiveLocationSharingDevice:(id)a0 completion:(id /* block */)a1;
- (id)cachedLocationForHandle:(id)a0 includeAddress:(char)a1;
- (void)canShareLocationWithHandle:(id)a0 isFromGroup:(char)a1 completion:(id /* block */)a2;
- (void)friendshipStateWithHandle:(id)a0 isFromGroup:(char)a1 completion:(id /* block */)a2;
- (void)getOfferExpirationForHandle:(id)a0 groupId:(id)a1 completion:(id /* block */)a2;
- (void)sendFriendshipInviteToHandle:(id)a0 from:(id)a1 isFromGroup:(char)a2 completion:(id /* block */)a3;
- (void)sendFriendshipInviteToHandle:(id)a0 isFromGroup:(char)a1 completion:(id /* block */)a2;
- (void)sendFriendshipOfferToHandles:(id)a0 from:(id)a1 expiration:(long long)a2 isFromGroup:(char)a3 completion:(id /* block */)a4;
- (void)startRefreshingLocationForHandles:(id)a0 priority:(long long)a1 isFromGroup:(char)a2 completion:(id /* block */)a3;
- (void)stopRefreshingLocationWithCompletion:(id /* block */)a0;
- (void)stopSharingLocationWith:(id)a0 from:(id)a1 isFromGroup:(char)a2 completion:(id /* block */)a3;
- (void)stopUpdatingFriendsWithCompletion:(id /* block */)a0;

@end
