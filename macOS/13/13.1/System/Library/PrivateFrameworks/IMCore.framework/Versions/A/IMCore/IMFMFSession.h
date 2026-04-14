@class FMFSession, NSString, FMFDevice;

@interface IMFMFSession : NSObject <FMFSessionDelegate>

@property (retain, nonatomic) FMFDevice *activeDevice;
@property (retain, nonatomic) FMFSession *session;
@property (retain, nonatomic) NSString *establishingAccountID;
@property (nonatomic) unsigned long long fmfProvisionedState;
@property (readonly, nonatomic) BOOL restrictLocationSharing;
@property (readonly, nonatomic) BOOL disableLocationSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_accountStore;
- (void)didReceiveLocation:(id)a0;
- (void)didStartSharingMyLocationWithHandle:(id)a0;
- (void)didStopSharingMyLocationWithHandle:(id)a0;
- (void)didStartAbilityToGetLocationForHandle:(id)a0;
- (void)didStopAbilityToGetLocationForHandle:(id)a0;
- (void)didUpdateHidingStatus:(BOOL)a0;
- (void)sendMappingPacket:(id)a0 toHandle:(id)a1;
- (void)didChangeActiveLocationSharingDevice:(id)a0;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (id)locationForHandle:(id)a0;
- (BOOL)imIsProvisionedForLocationSharing;
- (id)fmfHandlesForChat:(id)a0;
- (id)fmfOpenURLStringForChat:(id)a0;
- (id)allSiblingFMFHandlesForChat:(id)a0;
- (void)startTrackingLocationForHandle:(id)a0;
- (void)startTrackingLocationForChat:(id)a0;
- (void)stopTrackingLocationForHandle:(id)a0;
- (void)stopTrackingLocationForChat:(id)a0;
- (void)startSharingWithHandle:(id)a0 inChat:(id)a1 untilDate:(id)a2;
- (void)stopSharingWithHandle:(id)a0 inChat:(id)a1;
- (void)startSharingWithChat:(id)a0 untilDate:(id)a1;
- (void)stopSharingWithChat:(id)a0;
- (id)locationForFMFHandle:(id)a0;
- (id)locationForHandleOrSibling:(id)a0;
- (void)refreshLocationForHandle:(id)a0 inChat:(id)a1;
- (void)refreshLocationForChat:(id)a0;
- (BOOL)handleIsSharingLocationWithMe:(id)a0;
- (BOOL)fmfHandleIsSharingLocationWithMe:(id)a0;
- (BOOL)chatHasParticipantsSharingLocationWithMe:(id)a0;
- (BOOL)chatHasSiblingParticipantsSharingLocationWithMe:(id)a0;
- (BOOL)allChatParticipantsSharingLocationWithMe:(id)a0;
- (BOOL)handleIsFollowingMyLocation:(id)a0;
- (BOOL)fmfHandleIsFollowingMyLocation:(id)a0;
- (BOOL)chatHasParticipantsFollowingMyLocation:(id)a0;
- (BOOL)allChatParticipantsFollowingMyLocation:(id)a0;
- (id)timedOfferExpirationForChat:(id)a0;
- (void)_updateActiveDevice;
- (void)makeThisDeviceActiveDevice;
- (void)friendshipRequestReceived:(id)a0;
- (void)friendshipWasRemoved:(id)a0;
- (id)_bestAccountForAddresses:(id)a0;
- (void)_startSharingWithFMFHandles:(id)a0 inChat:(id)a1 untilDate:(id)a2;
- (void)_stopSharingWithFMFHandles:(id)a0 inChat:(id)a1;
- (id)_callerIDForChat:(id)a0;
- (void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)a0;
- (void)_postNotification:(id)a0 object:(id)a1 userInfo:(id)a2;
- (Class)__FMFSessionClass;
- (id)fmfGroupIdOneToOne;
- (id)fmfGroupIdGroup;

@end
