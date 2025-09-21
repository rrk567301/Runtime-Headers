@class NSUUID, NSDictionary, NSData, NSError, NSString, LACAnalyticsData;
@protocol LACXPCClient;

@interface LACEvaluationRequestDefault : NSObject <LACEvaluationRequest>

@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) id aclOperation;
@property (readonly, nonatomic) NSDictionary *options;
@property (weak, nonatomic) id<LACXPCClient> client;
@property (readonly, nonatomic) char customUI;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) unsigned int evaluationUserId;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) char isPurposeApplePay;
@property (readonly, nonatomic) char isPurposeUnlock;
@property (readonly, nonatomic) char isInteractive;
@property (nonatomic, getter=isImmediateSuccess) char immediateSuccess;
@property (retain, nonatomic) NSError *retryingForError;
@property (readonly, nonatomic) char isRecoveringFromBiolockout;
@property (retain, nonatomic) LACAnalyticsData *analyticsData;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) NSUUID *contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
