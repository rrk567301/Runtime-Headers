@class NSUUID, NSString, NSData, HAPPairingIdentity, CKRecordID, NSDate, CKDeviceToDeviceShareInvitationToken, NSDictionary, NSSet, MKFCKHome, MKFCKOutgoingInvitation;

@interface MKFCKUser : MKFCKHomeObject

@property (copy, nonatomic) NSString *accountHandle;
@property (nonatomic) long long analysisAccessSelection;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long camerasAccessLevel;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSString *homeAccessCode;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *idsMergeIdentifier;
@property (nonatomic) long long matterCASEAuthenticatedTagID;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) char ownerActivityNotificationsEnabledForPersonalRequests;
@property (nonatomic) long long ownerAddSceneButtonPresentedCount;
@property (nonatomic) char ownerAllowExplicitContent;
@property (nonatomic) char ownerAllowiTunesAccount;
@property (retain, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;
@property (nonatomic) char ownerCompletedSwitchingHomesOnboardingUI;
@property (nonatomic) char ownerDismissed2024EnergyOnboarding;
@property (nonatomic) char ownerDismissedAccessCodeOnboarding;
@property (nonatomic) char ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) char ownerDismissedAnnounceOnboarding;
@property (nonatomic) char ownerDismissedCameraRecordingOnboarding;
@property (nonatomic) char ownerDismissedCameraRecordingSetupBanner;
@property (nonatomic) char ownerDismissedCameraUpgradeOfferBanner;
@property (nonatomic) char ownerDismissedHomeTheaterOnboarding;
@property (nonatomic) char ownerDismissedIdentifyVoiceOnboarding;
@property (nonatomic) char ownerDismissedIdentifyVoiceSetupBanner;
@property (nonatomic) char ownerDismissedNaturalLightingOnboarding;
@property (nonatomic) char ownerDismissedTVViewingProfileOnboarding;
@property (nonatomic) char ownerDismissedTVViewingProfileSetupBanner;
@property (nonatomic) char ownerDismissedUserSplitMediaAccountWarning;
@property (nonatomic) char ownerDismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) char ownerDismissedWelcomeUI;
@property (nonatomic) char ownerDolbyAtmosEnabled;
@property (nonatomic) char ownerHasUserSeenRMVNewLanguageNotification;
@property (nonatomic) char ownerLosslessMusicEnabled;
@property (retain, nonatomic) NSData *ownerMatCredIPKExternalRepresentation;
@property (nonatomic) char ownerPlaybackInfluencesEnabled;
@property (nonatomic) char ownerSiriIdentifyVoiceEnabled;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) long long privilege;
@property (nonatomic) char remoteAccessAllowed;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (nonatomic) char sharePhotosFaceClassifications;
@property (nonatomic) long long uniqueIDForAccessories;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *automations;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKOutgoingInvitation *invitation;
@property (retain, nonatomic) MKFCKHome *ownedHome;
@property (retain, nonatomic) NSSet *personsFromPhotos;

+ (id)fetchRequest;

- (char)isOwner;
- (id)_resolveSharedUserDataRootWithContext:(id)a0;
- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)exportOwnerUserSettingsFromLocalModel:(id)a0 context:(id)a1;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)importOwnerUserSettingsIntoLocalModel:(id)a0 context:(id)a1;
- (char)importSharedUserSettingsIntoLocalModel:(id)a0 context:(id)a1;

@end
