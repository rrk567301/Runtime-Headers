@class HMRestrictedGuestHomeAccessSettings, HMUserCameraAccess, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMHomeAccessControl : HMAccessControl

@property (getter=isOwner) char owner;
@property (nonatomic, getter=isAdministrator) char administrator;
@property (getter=isRemoteAccessAllowed) char remoteAccessAllowed;
@property (getter=isAccessAllowed) char accessAllowed;
@property (nonatomic) unsigned long long accessNotAllowedReasonCode;
@property (getter=isRestrictedGuest) char restrictedGuest;
@property (retain, nonatomic) HMRestrictedGuestHomeAccessSettings *restrictedGuestAccessSettings;
@property (nonatomic, getter=isRestrictedGuestInAllowedPeriod) char restrictedGuestInAllowedPeriod;
@property (retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (retain, nonatomic) HMUserCameraAccess *camerasAccess;
@property (getter=isAnnounceAccessAllowed) char announceAccessAllowed;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_updateAccessForUser:(id)a0 restrictedGuestAccessSettings:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)camerasAccessLevel;
- (id)initWithUser:(id)a0 allowAccess:(char)a1 owner:(char)a2 administratorPrivilege:(char)a3 remoteAccess:(char)a4 presenceAuthStatus:(id)a5 presenceComputeStatus:(id)a6 announceAccess:(char)a7 camerasAccess:(id)a8 restrictedGuest:(char)a9 restrictedGuestAccessSettings:(id)a10;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (void)setUserAccessSettings:(id)a0;
- (void)updateAdministratorAccess:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateAnnounceAccess:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateCamerasAccessLevel:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateRemoteAccess:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateRestrictedGuestSchedule:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRestrictedGuestSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
