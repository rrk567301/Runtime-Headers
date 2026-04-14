@class LACClientInfo, NSUUID, NSDictionary, NSData, NSError, NSString, LACAnalyticsData;
@protocol LACXPCClient;

@interface LACEvaluationRequestDefault : NSObject <LACEvaluationRequest>

@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) id aclOperation;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) id<LACXPCClient> client;
@property (readonly, nonatomic) BOOL customUI;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) unsigned int evaluationUserId;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) BOOL isPurposeApplePay;
@property (readonly, nonatomic) BOOL isPurposeUnlock;
@property (readonly, nonatomic) BOOL isPurposeInAppPayment;
@property (readonly, nonatomic) BOOL isInteractive;
@property (nonatomic, getter=isImmediateSuccess) BOOL immediateSuccess;
@property (retain, nonatomic) NSError *retryingForError;
@property (readonly, nonatomic) BOOL isRecoveringFromBiolockout;
@property (retain, nonatomic) LACAnalyticsData *analyticsData;
@property (readonly, nonatomic) LACClientInfo *clientInfo;
@property (readonly, nonatomic) NSUUID *contextID;
@property (readonly, nonatomic) unsigned long long originatorId;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateOptions:(id)a0;
- (void)resetPausedEvents;
- (void)updatePayload:(id)a0;
- (void).cxx_destruct;
- (void)pause:(BOOL)a0 event:(long long)a1;
- (id)shallowCopy;
- (BOOL)isEventPaused:(long long)a0;

@end
