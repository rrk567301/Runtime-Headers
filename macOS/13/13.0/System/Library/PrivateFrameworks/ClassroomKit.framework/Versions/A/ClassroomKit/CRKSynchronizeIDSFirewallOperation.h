@class NSSet, CATOperation;
@protocol CRKIDSLocalFirewallStorage, CRKIDSPrimitives;

@interface CRKSynchronizeIDSFirewallOperation : CATOperation

@property (readonly, nonatomic) id<CRKIDSLocalFirewallStorage> localStorage;
@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, copy, nonatomic) NSSet *trustedRosterAppleIDs;
@property (copy, nonatomic) NSSet *appleIDsToAdd;
@property (copy, nonatomic) NSSet *appleIDsToRemove;
@property (retain, nonatomic) CATOperation *fetchAllowedAppleIDsOperation;
@property (retain, nonatomic) CATOperation *addAllowedAppleIDsOperation;
@property (retain, nonatomic) CATOperation *removeAllowedAppleIDsOperation;

- (void)run;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void)finishWithError:(id)a0;
- (void)operationToFetchAppleIDsDidFinish:(id)a0;
- (void)operationToAddAllowedAppleIDsDidFinish:(id)a0;
- (void)operationToRemoveAllowedAppleIDsDidFinish:(id)a0;
- (id)initWithIDSPrimitives:(id)a0 localStorage:(id)a1 trustedRosterAppleIDs:(id)a2;
- (void)fetchAllowedAppleIDs;
- (void)computeChanges;
- (void)addAllowedAppleIDs;
- (void)removeAllowedAppleIDs;
- (id)operationToFetchAllowedAppleIDs;
- (id)operationToAddAllowedAppleIDs:(id)a0;
- (id)operationToRemoveAllowedAppleIDs:(id)a0;

@end
