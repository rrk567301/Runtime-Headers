@class NSSet, CATOperation, CATOperationQueue;
@protocol CRKIDSPrimitives, CRKASMRoster;

@interface CRKIDSFirewallUpdatingRosterProvider : CRKASMRosterProviderDecoratorBase <CRKIDSLocalFirewallStorage>

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (nonatomic, getter=isObservingRoster) BOOL observingRoster;
@property (retain, nonatomic) id<CRKASMRoster> publishedRoster;
@property (weak, nonatomic) CATOperation *lastWorkOperation;
@property (copy, nonatomic) NSSet *allowedAppleIDs;

+ (id)trustedUserAppleIDsFromRoster:(id)a0;
+ (id)keyPathsForValuesAffectingRoster;
+ (id)observedKeyPaths;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)rosterDidChange;
- (void)synchronizeFirewallOperationDidFail:(id)a0;
- (id)initWithRosterProvider:(id)a0 IDSPrimitives:(id)a1;
- (void)enqueueWorkOperation:(id)a0;
- (id)roster;
- (void)beginObservingRoster;
- (void)endObservingRoster;

@end
