@class NSArray, NSMutableArray, CKDOperation;

@interface CKDPublicIdentityLookupRequest : NSObject {
    CKDOperation *_operation;
    NSArray *_lookupInfosToFetch;
    NSMutableArray *_missingLookupInfos;
}

@property BOOL isCancelled;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (copy, nonatomic) id /* block */ perLookupInfoProgressBlock;
@property (copy, nonatomic) id /* block */ lookupCompletionBlock;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (void)finishWithError:(id)a0;
- (void)performRequest;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1;
- (void)_saveUserIdentity:(id)a0 forLookupInfo:(id)a1;
- (void)_receivedUserIdentity:(id)a0 forLookupInfo:(id)a1 error:(id)a2;
- (id)spawnURLRequests;
- (id)_generateOONPrivateKeyWithError:(id *)a0;
- (BOOL)_tryComplete;

@end
