@class NSUUID, NSDate, HMHomeInvitationData, HMFTimer, NSURL, NSArray, CKDeviceToDeviceShareInvitationToken, NSString, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMHomeInvitationData *invitationData;
@property (retain, nonatomic) NSUUID *idsInvitationUUID;
@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (copy, nonatomic) id /* block */ resolutionHandler;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (retain, nonatomic) HMFTimer *timer;
@property (retain, nonatomic) NSArray *operations;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long invitationState;
@property (readonly, nonatomic, getter=isExpired) char expired;
@property (readonly, nonatomic, getter=isPending) char pending;
@property (readonly, nonatomic, getter=isAccepted) char accepted;
@property (readonly, nonatomic, getter=isDeclined) char declined;
@property (readonly, nonatomic) double age;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)accept;
- (void)_clearTimer;
- (void)expire;
- (void)timerDidFire:(id)a0;
- (id)initWithCoder:(id)a0 invitationData:(id)a1;
- (id)initWithInvitationData:(id)a0 forHome:(id)a1;
- (void)_configureTimer;
- (void)decline;
- (void)_resolve:(char)a0;
- (id)describeWithFormat;
- (void)notifyStateChangedForMessage:(id)a0;
- (char)refreshDisplayName;
- (void)updateInvitationState:(long long)a0;
- (void)updateTimer:(unsigned long long)a0 clientQueue:(id)a1;

@end
