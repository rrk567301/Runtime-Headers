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
+ (id)unarchiveNoticeTransmissionEvent:(id)a0;
+ (unsigned long long)noticeFanoutThreshold;
+ (Class)_SWCollaborationClearNoticeTransmissionMessageClass;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)senderLoginIDs;
- (void)sendNotice:(id)a0 toHandles:(id)a1 fromHandle:(id)a2;
- (void)handleIncomingNoticeProtobuf:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void).cxx_destruct;
- (void)reflectDismissalForNoticeGUIDs:(id)a0;
- (id)_handlesMinusSenderServiceAccountID:(id)a0;
- (id)init;
- (id)_senderServiceAccountIDFrom:(id)a0;
- (void)sendClearNotice:(id)a0 toHandles:(id)a1;
- (void)dealloc;

@end
