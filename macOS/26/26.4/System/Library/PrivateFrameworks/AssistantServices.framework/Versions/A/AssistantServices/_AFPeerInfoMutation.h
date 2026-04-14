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
- (BOOL)getIsLocationSharingDevice;
- (void)setBuildVersion:(id)a0;
- (BOOL)isDirty;
- (void)setUserInterfaceIdiom:(id)a0;
- (id)getRoomName;
- (void)setRapportEffectiveIdentifier:(id)a0;
- (void)setAssistantIdentifier:(id)a0;
- (id)getSharedUserIdentifier;
- (void)setRoomName:(id)a0;
- (id)getRapportEffectiveIdentifier;
- (id)getMediaRouteIdentifier;
- (BOOL)getIsSiriCloudSyncEnabled;
- (void)setMediaSystemIdentifier:(id)a0;
- (id)getName;
- (void)setAceVersion:(id)a0;
- (id)getIdsDeviceUniqueIdentifier;
- (void)setMyriadTrialTreatment:(id)a0;
- (void)setName:(id)a0;
- (id)getBuildVersion;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setIsCommunalDevice:(BOOL)a0;
- (void)setSharedUserIdentifier:(id)a0;
- (void)setIsSiriCloudSyncEnabled:(BOOL)a0;
- (id)getHomeKitAccessoryIdentifier;
- (id)getMyriadTrialTreatment;
- (id)getUserInterfaceIdiom;
- (void)setIsDeviceOwnedByCurrentUser:(BOOL)a0;
- (id)getMediaSystemIdentifier;
- (void)setMediaRouteIdentifier:(id)a0;
- (void)setHomeKitAccessoryIdentifier:(id)a0;
- (id)getAceVersion;
- (BOOL)getIsCommunalDevice;
- (id)getAssistantIdentifier;
- (id)getIdsIdentifier;
- (void)setIsLocationSharingDevice:(BOOL)a0;
- (id)getProductType;
- (BOOL)getIsDeviceOwnedByCurrentUser;
- (void)setIdsDeviceUniqueIdentifier:(id)a0;

@end
