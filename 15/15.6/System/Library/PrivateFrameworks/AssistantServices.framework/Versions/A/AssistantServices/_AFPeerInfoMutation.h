@class NSString, AFPeerInfo;

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating> {
    AFPeerInfo *_base;
    char _isDeviceOwnedByCurrentUser;
    NSString *_assistantIdentifier;
    NSString *_sharedUserIdentifier;
    NSString *_idsIdentifier;
    NSString *_idsDeviceUniqueIdentifier;
    NSString *_rapportEffectiveIdentifier;
    NSString *_homeKitAccessoryIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    char _isCommunalDevice;
    NSString *_roomName;
    NSString *_name;
    NSString *_productType;
    NSString *_buildVersion;
    NSString *_userInterfaceIdiom;
    NSString *_aceVersion;
    char _isLocationSharingDevice;
    char _isSiriCloudSyncEnabled;
    NSString *_myriadTrialTreatment;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsDeviceOwnedByCurrentUser : 1; unsigned char hasAssistantIdentifier : 1; unsigned char hasSharedUserIdentifier : 1; unsigned char hasIdsIdentifier : 1; unsigned char hasIdsDeviceUniqueIdentifier : 1; unsigned char hasRapportEffectiveIdentifier : 1; unsigned char hasHomeKitAccessoryIdentifier : 1; unsigned char hasMediaSystemIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; unsigned char hasIsCommunalDevice : 1; unsigned char hasRoomName : 1; unsigned char hasName : 1; unsigned char hasProductType : 1; unsigned char hasBuildVersion : 1; unsigned char hasUserInterfaceIdiom : 1; unsigned char hasAceVersion : 1; unsigned char hasIsLocationSharingDevice : 1; unsigned char hasIsSiriCloudSyncEnabled : 1; unsigned char hasMyriadTrialTreatment : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setName:(id)a0;
- (char)isDirty;
- (void)setUserInterfaceIdiom:(id)a0;
- (void)setBuildVersion:(id)a0;
- (void)setIdsIdentifier:(id)a0;
- (id)getName;
- (void)setProductType:(id)a0;
- (void)setAceVersion:(id)a0;
- (void)setRoomName:(id)a0;
- (void)setMediaRouteIdentifier:(id)a0;
- (void)setMediaSystemIdentifier:(id)a0;
- (id)getBuildVersion;
- (id)getAceVersion;
- (id)getAssistantIdentifier;
- (id)getHomeKitAccessoryIdentifier;
- (id)getIdsDeviceUniqueIdentifier;
- (id)getIdsIdentifier;
- (char)getIsCommunalDevice;
- (char)getIsDeviceOwnedByCurrentUser;
- (char)getIsLocationSharingDevice;
- (char)getIsSiriCloudSyncEnabled;
- (id)getMediaRouteIdentifier;
- (id)getMediaSystemIdentifier;
- (id)getMyriadTrialTreatment;
- (id)getProductType;
- (id)getRapportEffectiveIdentifier;
- (id)getRoomName;
- (id)getSharedUserIdentifier;
- (id)getUserInterfaceIdiom;
- (id)initWithBase:(id)a0;
- (void)setAssistantIdentifier:(id)a0;
- (void)setHomeKitAccessoryIdentifier:(id)a0;
- (void)setIdsDeviceUniqueIdentifier:(id)a0;
- (void)setIsCommunalDevice:(char)a0;
- (void)setIsDeviceOwnedByCurrentUser:(char)a0;
- (void)setIsLocationSharingDevice:(char)a0;
- (void)setIsSiriCloudSyncEnabled:(char)a0;
- (void)setMyriadTrialTreatment:(id)a0;
- (void)setRapportEffectiveIdentifier:(id)a0;
- (void)setSharedUserIdentifier:(id)a0;

@end
