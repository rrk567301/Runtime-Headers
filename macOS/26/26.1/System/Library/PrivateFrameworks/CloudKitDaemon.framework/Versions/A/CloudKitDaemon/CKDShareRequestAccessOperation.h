@class NSMutableArray;
@protocol CKShareRequestAccessOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDShareRequestAccessOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareURLsToRequestAccessFor;
@property (retain, nonatomic) id<CKShareRequestAccessOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ shareRequestAccessCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (BOOL)validateAgainstLiveContainer:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_handleShareAccessRequestedForURL:(id)a0 responseCode:(id)a1;
- (void)_performCallbackForURL:(id)a0 error:(id)a1;
- (BOOL)_shareAccessRequest;
- (BOOL)isEmail:(id)a0;
- (BOOL)isPhoneNumber:(id)a0;

@end
