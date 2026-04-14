@class HMDHome, HMDSharedUserInviteOwnerSendLogEvent, NSString;

@interface HMDSharedUserInviteOwnerSendLogEventBuilder : HMDSharedUserInviteLogEventBuilder <HMFLogging> {
    unsigned long long createShareBeginTime;
    unsigned long long addUserToShareBeginTime;
    unsigned long long sendInvitationBeginTime;
}

@property (readonly, weak) HMDHome *home;
@property (readonly) HMDSharedUserInviteOwnerSendLogEvent *inviteLogEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isReady;
- (void)cancel;
- (void)submit;
- (id)initWithHome:(id)a0 sessionIdentifier:(id)a1 invitationType:(unsigned long long)a2;
- (id)initWithHome:(id)a0 sessionIdentifier:(id)a1 invitationType:(unsigned long long)a2 logEventSubmitter:(id)a3 currentUpTicksBlock:(id /* block */)a4 submissionTimerFactory:(id /* block */)a5;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markCreateShareBegin;
- (void)markCreateShareEnd;
- (void)markSendInviteBegin;
- (void)markSendInviteEnd;
- (void)markUserAlreadyAddedToShare;

@end
