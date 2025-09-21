@class NSArray, NSMutableArray, CKDOperation;

@interface CKDPublicIdentityLookupRequest : NSObject {
    CKDOperation *_operation;
    NSArray *_lookupInfosToFetch;
    NSMutableArray *_missingLookupInfos;
}

@property char hasPerformed;
@property char isCancelled;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (copy, nonatomic) id /* block */ perLookupInfoProgressBlock;
@property (copy, nonatomic) id /* block */ lookupCompletionBlock;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (void)_receivedUserIdentity:(id)a0 forLookupInfo:(id)a1 error:(id)a2;
- (void)_saveUserIdentity:(id)a0 forLookupInfo:(id)a1;
- (char)_tryComplete;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1;
- (void)performRequest;
- (id)spawnURLRequests;

@end
