@class NSString, IMDCollaborationNoticeRateLimiter, IMDCollaborationClearNoticeRateLimiter, IDSService;
@protocol IMDCollaborationNoticeDispatcherDelegate;

@interface IMDCollaborationNoticeDispatcher : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *gelatoService;
@property (weak, nonatomic) id<IMDCollaborationNoticeDispatcherDelegate> delegate;
@property (retain, nonatomic) IMDCollaborationNoticeRateLimiter *rateLimiter;
@property (retain, nonatomic) IMDCollaborationClearNoticeRateLimiter *clearRateLimiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_SWCollaborationNoticeTransmissionMessageClass;
+ (Class)_SWCollaborationClearNoticeTransmissionMessageClass;
+ (unsigned long long)noticeFanoutThreshold;
+ (id)unarchiveNoticeTransmissionEvent:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleIncomingNoticeProtobuf:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendNotice:(id)a0 toHandles:(id)a1;
- (void)sendClearNotice:(id)a0 toHandles:(id)a1;
- (void)reflectDismissalForNoticeGUIDs:(id)a0;
- (id)_handlesMinusSenderServiceAccountID:(id)a0;
- (id)_senderServiceAccountIDFrom:(id)a0;
- (id)senderLoginIDs;

@end
