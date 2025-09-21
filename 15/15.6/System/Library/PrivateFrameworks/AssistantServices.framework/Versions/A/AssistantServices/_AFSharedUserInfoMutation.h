@class NSString, AFCompanionDeviceInfo, AFSharedUserInfo;

@interface _AFSharedUserInfoMutation : NSObject <AFSharedUserInfoMutating> {
    AFSharedUserInfo *_base;
    NSString *_sharedUserId;
    NSString *_loggableSharedUserId;
    AFCompanionDeviceInfo *_companionDeviceInfo;
    char _personalRequestsEnabled;
    char _companionLinkReady;
    NSString *_homeUserId;
    NSString *_iCloudAltDSID;
    char _isDeviceOwner;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSharedUserId : 1; unsigned char hasLoggableSharedUserId : 1; unsigned char hasCompanionDeviceInfo : 1; unsigned char hasPersonalRequestsEnabled : 1; unsigned char hasCompanionLinkReady : 1; unsigned char hasHomeUserId : 1; unsigned char hasICloudAltDSID : 1; unsigned char hasIsDeviceOwner : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (void)setLoggableSharedUserId:(id)a0;
- (void)setSharedUserId:(id)a0;
- (id)getSharedUserId;
- (id)getCompanionDeviceInfo;
- (char)getCompanionLinkReady;
- (id)getHomeUserId;
- (id)getICloudAltDSID;
- (char)getIsDeviceOwner;
- (id)getLoggableSharedUserId;
- (char)getPersonalRequestsEnabled;
- (id)initWithBase:(id)a0;
- (void)setCompanionDeviceInfo:(id)a0;
- (void)setCompanionLinkReady:(char)a0;
- (void)setHomeUserId:(id)a0;
- (void)setICloudAltDSID:(id)a0;
- (void)setIsDeviceOwner:(char)a0;
- (void)setPersonalRequestsEnabled:(char)a0;

@end
