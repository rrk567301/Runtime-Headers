@class NSArray, NSMutableArray;
@protocol IMAVControllerDelegate;

@interface IMAVController : NSObject

@property (retain, nonatomic) NSMutableArray *_delegates;
@property (readonly, nonatomic) BOOL _ready;
@property (readonly, nonatomic) BOOL hasActiveConference;
@property (readonly, nonatomic) BOOL hasRunningConference;
@property (readonly, nonatomic) unsigned int overallChatState;
@property (readonly, nonatomic) BOOL cameraCapable;
@property (readonly, nonatomic) BOOL microphoneCapable;
@property (readonly, nonatomic) BOOL cameraConnected;
@property (readonly, nonatomic) BOOL microphoneConnected;
@property (nonatomic) BOOL blockMultipleIncomingInvitations;
@property (nonatomic) BOOL blockIncomingInvitationsDuringCall;
@property (nonatomic) BOOL blockOutgoingInvitationsDuringCall;
@property (readonly, nonatomic) NSArray *delegates;
@property (nonatomic) id<IMAVControllerDelegate> delegate;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)requestPendingACInvitations;
- (void)setHasRunningConference:(BOOL)a0;
- (BOOL)_shouldObserveConferences;
- (void)_setServiceVCCaps:(unsigned long long)a0 toCaps:(unsigned long long)a1;
- (id)vcResponseInfoWithSessionID:(unsigned int)a0;
- (void)updateActiveConference;
- (void)removeDelegate:(id)a0;
- (BOOL)_shouldRunConferences;
- (void)_dumpCaps;
- (id)init;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)a0;
- (void)_receivedPendingVCRequests;
- (void)setIMAVCapabilities:(long long)a0 toCaps:(long long)a1;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (void)pushCachedVCCapsToDaemon;
- (void)setHasActiveConference:(BOOL)a0;
- (BOOL)_shouldRunACConferences;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 conferenceID:(id)a3;
- (void)cancelVCRequestWithBuddy:(id)a0 vcProps:(id)a1 forAccount:(id)a2 conferenceID:(id)a3 reason:(id)a4;
- (void)_receivedPendingACRequests;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 forAccount:(id)a3 conferenceID:(id)a4;
- (void)setupIMAVController;
- (void)requestPendingVCInvitations;
- (void).cxx_destruct;

@end
