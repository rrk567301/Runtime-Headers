@class NSString, HMDHomeManager, HMDSharedUserInviteAcceptLogEvent;

@interface HMDSharedUserInviteAcceptLogEventBuilder : HMDSharedUserInviteLogEventBuilder <HMFLogging> {
    unsigned long long joinOwnerShareBeginTime;
    unsigned long long createMKFCKSharedUserDataRootBeginTime;
    unsigned long long createReverseShareBeginTime;
    unsigned long long addUserToShareBeginTime;
    unsigned long long sendAcceptanceToOwnerBeginTime;
    unsigned long long discoverPrimaryResidentBeginTime;
    unsigned long long residentSyncBeginTime;
}

@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) HMDSharedUserInviteAcceptLogEvent *acceptLogEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isReady;
- (void)submit;
- (void)markCreatedHome;
- (id)initWithHomeUUID:(id)a0 homeManager:(id)a1 sessionIdentifier:(id)a2 invitationType:(unsigned long long)a3 logEventSubmitter:(id)a4 wifiManager:(id)a5 currentUpTicksBlock:(id /* block */)a6 submissionTimerFactory:(id /* block */)a7;
- (id)initWithHomeUUID:(id)a0 homeManager:(id)a1 sessionIdentifier:(id)a2 invitationType:(unsigned long long)a3 wifiManager:(id)a4;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markCreateMKFCKSharedUserDataRootBegin;
- (void)markCreateMKFCKSharedUserDataRootEnd;
- (void)markCreateReverseShareBegin;
- (void)markCreateReverseShareEnd;
- (void)markDiscoverPrimaryResidentBegin;
- (void)markDiscoverPrimaryResidentEnd;
- (void)markJoinOwnerShareBegin;
- (void)markJoinOwnerShareEnd;
- (void)markResidentSyncBegin;
- (void)markResidentSyncEnd;
- (void)markSendAcceptanceToOwnerBegin;
- (void)markSendAcceptanceToOwnerEnd;

@end
