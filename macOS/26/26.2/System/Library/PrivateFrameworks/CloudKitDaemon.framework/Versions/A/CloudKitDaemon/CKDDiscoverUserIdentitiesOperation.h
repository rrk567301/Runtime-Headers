@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation

@property (class, readonly, nonatomic) BOOL adopterProvidedLookupInfos;

@property (retain, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ discoverUserIdentitiesProgressBlock;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (void).cxx_destruct;
- (void)_discoverIdentitiesWithLookupInfos:(id)a0 completionBlock:(id /* block */)a1;
- (void)_handleDiscoveredIdentity:(id)a0 lookupInfo:(id)a1 responseCode:(id)a2;

@end
