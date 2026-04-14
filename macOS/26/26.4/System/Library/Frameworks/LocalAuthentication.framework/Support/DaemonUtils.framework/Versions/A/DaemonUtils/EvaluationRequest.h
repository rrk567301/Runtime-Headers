@class NSError, NSUUID, NSData, LACClientInfo, NSString, NSDictionary, LAAnalyticsEvaluation, NSMutableSet, LACAnalyticsData;
@protocol LACContextCallbackXPC, LACXPCClient;

@interface EvaluationRequest : Request <LACEvaluationRequest>

@property (retain, nonatomic) NSData *acl;
@property (retain, nonatomic) id aclOperation;
@property (retain, nonatomic) LAAnalyticsEvaluation *analytics;
@property (retain, nonatomic) id<LACContextCallbackXPC> callback;
@property (retain, nonatomic) id<LACXPCClient> client;
@property (retain, nonatomic) LACClientInfo *clientInfo;
@property (retain, nonatomic) NSUUID *contextID;
@property (nonatomic) BOOL customUI;
@property (nonatomic) unsigned int evaluationUserId;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long originatorId;
@property (retain, nonatomic) NSMutableSet *pausedEvents;
@property (retain, nonatomic) NSDictionary *payload;
@property (nonatomic) long long policy;
@property (nonatomic) long long purpose;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) BOOL isPurposeApplePay;
@property (readonly, nonatomic) BOOL isPurposeUnlock;
@property (readonly, nonatomic) BOOL isPurposeSecureUIRecording;
@property (readonly, nonatomic) BOOL isPurposeInAppPayment;
@property (retain, nonatomic) NSError *retryingForError;
@property (readonly, nonatomic) BOOL isRecoveringFromBiolockout;
@property (nonatomic) BOOL secureIntentRequested;
@property (readonly, nonatomic) BOOL isInteractive;
@property (nonatomic, getter=isImmediateSuccess) BOOL immediateSuccess;
@property (retain, nonatomic) LACAnalyticsData *analyticsData;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)current;
+ (BOOL)isApplePayPolicy:(long long)a0;

- (void)updateOptions:(id)a0;
- (id)initWithAcl:(id)a0 operation:(id)a1 options:(id)a2 contextID:(id)a3;
- (id)initWithPolicy:(long long)a0 options:(id)a1 uiDelegate:(id)a2 contextID:(id)a3;
- (void)resetPausedEvents;
- (void)updatePayload:(id)a0;
- (void).cxx_destruct;
- (void)pause:(BOOL)a0 event:(long long)a1;
- (id)initWithPolicy:(long long)a0 options:(id)a1 contextID:(id)a2;
- (id)initWithAcl:(id)a0 operation:(id)a1 options:(id)a2 uiDelegate:(id)a3 contextID:(id)a4;
- (id)shallowCopy;
- (id)initSimulatedForBiolockoutPreflight;
- (BOOL)isEventPaused:(long long)a0;

@end
