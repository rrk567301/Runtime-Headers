@class NSUUID, NSDictionary, NSData, NSError, NSString;
@protocol LACXPCClient;

@interface LACEvaluationRequestDefault : NSObject <LACEvaluationRequest>

@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) id aclOperation;
@property (readonly, nonatomic) NSDictionary *options;
@property (weak, nonatomic) id<LACXPCClient> client;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) unsigned int evaluationUserId;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) BOOL isPurposeApplePay;
@property (readonly, nonatomic) BOOL isPurposeUnlock;
@property (retain, nonatomic) NSError *retryingForError;
@property (readonly, nonatomic) BOOL isRecoveringFromBiolockout;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) NSUUID *contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
