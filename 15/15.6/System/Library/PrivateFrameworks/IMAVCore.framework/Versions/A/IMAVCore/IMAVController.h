@class NSArray, NSMutableArray;
@protocol IMAVControllerDelegate;

@interface IMAVController : NSObject

@property (retain, nonatomic) NSMutableArray *_delegates;
@property (readonly, nonatomic) char _ready;
@property (readonly, nonatomic) char hasActiveConference;
@property (readonly, nonatomic) char hasRunningConference;
@property (readonly, nonatomic) unsigned int overallChatState;
@property (readonly, nonatomic) char cameraCapable;
@property (readonly, nonatomic) char microphoneCapable;
@property (readonly, nonatomic) char cameraConnected;
@property (readonly, nonatomic) char microphoneConnected;
@property (nonatomic) char blockMultipleIncomingInvitations;
@property (nonatomic) char blockIncomingInvitationsDuringCall;
@property (nonatomic) char blockOutgoingInvitationsDuringCall;
@property (readonly, nonatomic) NSArray *delegates;
@property (nonatomic) id<IMAVControllerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (void)_dumpCaps;
- (void)_receivedPendingACRequests;
- (void)_receivedPendingVCRequests;
- (void)_setServiceVCCaps:(unsigned long long)a0 toCaps:(unsigned long long)a1;
- (char)_shouldObserveConferences;
- (char)_shouldRunACConferences;
- (char)_shouldRunConferences;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)a0;
- (void)cancelVCRequestWithBuddy:(id)a0 vcProps:(id)a1 forAccount:(id)a2 conferenceID:(id)a3 reason:(id)a4;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 conferenceID:(id)a3;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 forAccount:(id)a3 conferenceID:(id)a4;
- (void)pushCachedVCCapsToDaemon;
- (void)requestPendingACInvitations;
- (void)requestPendingVCInvitations;
- (void)setHasActiveConference:(char)a0;
- (void)setHasRunningConference:(char)a0;
- (void)setIMAVCapabilities:(long long)a0 toCaps:(long long)a1;
- (void)setupIMAVController;
- (void)updateActiveConference;
- (id)vcResponseInfoWithSessionID:(unsigned int)a0;

@end
