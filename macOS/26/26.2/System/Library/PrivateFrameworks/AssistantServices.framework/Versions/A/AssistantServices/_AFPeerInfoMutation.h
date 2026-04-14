@class NSString, AFPeerInfo;

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating> {
    AFPeerInfo *_base;
    BOOL _isDeviceOwnedByCurrentUser;
    NSString *_assistantIdentifier;
    NSString *_sharedUserIdentifier;
    NSString *_idsIdentifier;
    NSString *_idsDeviceUniqueIdentifier;
    NSString *_rapportEffectiveIdentifier;
    NSString *_homeKitAccessoryIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    BOOL _isCommunalDevice;
    NSString *_roomName;
    NSString *_name;
    NSString *_productType;
    NSString *_buildVersion;
    NSString *_userInterfaceIdiom;
    NSString *_aceVersion;
    BOOL _isLocationSharingDevice;
    BOOL _isSiriCloudSyncEnabled;
    NSString *_myriadTrialTreatment;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsDeviceOwnedByCurrentUser : 1; unsigned char hasAssistantIdentifier : 1; unsigned char hasSharedUserIdentifier : 1; unsigned char hasIdsIdentifier : 1; unsigned char hasIdsDeviceUniqueIdentifier : 1; unsigned char hasRapportEffectiveIdentifier : 1; unsigned char hasHomeKitAccessoryIdentifier : 1; unsigned char hasMediaSystemIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; unsigned char hasIsCommunalDevice : 1; unsigned char hasRoomName : 1; unsigned char hasName : 1; unsigned char hasProductType : 1; unsigned char hasBuildVersion : 1; unsigned char hasUserInterfaceIdiom : 1; unsigned char hasAceVersion : 1; unsigned char hasIsLocationSharingDevice : 1; unsigned char hasIsSiriCloudSyncEnabled : 1; unsigned char hasMyriadTrialTreatment : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIdsIdentifier:(id)a0;
- (void)setProductType:(id)a0;
- (void)setMediaRouteIdentifier:(id)a0;
- (id)getBuildVersion;
- (id)getProductType;
- (void)setMediaSystemIdentifier:(id)a0;
- (void)setMyriadTrialTreatment:(id)a0;
- (id)initWithBase:(id)a0;
- (void)setUserInterfaceIdiom:(id)a0;
- (BOOL)isDirty;
- (id)getIdsIdentifier;
- (void)setSharedUserIdentifier:(id)a0;
- (void)setName:(id)a0;
- (BOOL)getIsLocationSharingDevice;
- (id)getMyriadTrialTreatment;
- (id)getName;
- (void)setIsLocationSharingDevice:(BOOL)a0;
- (BOOL)getIsCommunalDevice;
- (void)setIsSiriCloudSyncEnabled:(BOOL)a0;
- (id)getRoomName;
- (void).cxx_destruct;
- (id)getRapportEffectiveIdentifier;
- (void)setAceVersion:(id)a0;
- (void)setRapportEffectiveIdentifier:(id)a0;
- (id)getMediaRouteIdentifier;
- (id)getHomeKitAccessoryIdentifier;
- (void)setIsDeviceOwnedByCurrentUser:(BOOL)a0;
- (void)setHomeKitAccessoryIdentifier:(id)a0;
- (void)setBuildVersion:(id)a0;
- (void)setAssistantIdentifier:(id)a0;
- (void)setIdsDeviceUniqueIdentifier:(id)a0;
- (id)getSharedUserIdentifier;
- (void)setRoomName:(id)a0;
- (BOOL)getIsSiriCloudSyncEnabled;
- (id)getAssistantIdentifier;
- (void)setIsCommunalDevice:(BOOL)a0;
- (id)getMediaSystemIdentifier;
- (BOOL)getIsDeviceOwnedByCurrentUser;
- (id)getAceVersion;
- (id)getIdsDeviceUniqueIdentifier;
- (id)getUserInterfaceIdiom;

@end
