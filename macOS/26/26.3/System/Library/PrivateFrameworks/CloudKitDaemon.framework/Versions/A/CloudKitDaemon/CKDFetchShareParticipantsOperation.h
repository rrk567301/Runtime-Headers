@class CKDPublicIdentityLookupRequest, NSArray;
@protocol CKFetchShareParticipantsOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchShareParticipantsOperation : CKDOperation

@property (retain, nonatomic) CKDPublicIdentityLookupRequest *pendingRequest;
@property (retain, nonatomic) NSArray *userIdentityLookupInfos;
@property (retain, nonatomic) id<CKFetchShareParticipantsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ shareParticipantFetchedBlock;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (int)operationType;
- (void)finishWithError:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_fetchIdentities;
- (void)_handleFetchedInfo:(id)a0 withIdentity:(id)a1 error:(id)a2;

@end
