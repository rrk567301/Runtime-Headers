@class NSUUID, RBSProcessIdentity, PFPosterExtension, NSString, BSAuditToken, BSAtomicFlag, _EXExtensionProcess, NSHashTable, NSMutableArray, _EXHostConfiguration;

@interface PFPosterExtensionInstance : NSObject <BSInvalidatable> {
    BSAtomicFlag *_invalidationFlag;
    BSAtomicFlag *_acquireAssertions;
    _EXExtensionProcess *_extensionProcess;
    BSAuditToken *_auditToken;
    NSMutableArray *_bootExtensionInstanceCompletionBlocks;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) PFPosterExtension *extension;
@property (readonly, nonatomic) _EXHostConfiguration *hostConfiguration;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic) NSUUID *instanceIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionInstanceForIdentity:(id)a0 instanceIdentifier:(id)a1;
+ (id)extensionInstanceForPath:(id)a0 instanceIdentifier:(id)a1;

- (id)initWithExtension:(id)a0 instanceIdentifier:(id)a1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (BOOL)terminateWithExplanation:(id)a0 error:(out id *)a1;
- (void)_didAcquireExtensionProcess:(id)a0 error:(id)a1;
- (void)_extensionProcessDidInterrupt;
- (void)_fireObserversRespondingToSelector:(SEL)a0 block:(id /* block */)a1;
- (void)_sync_didInvalidate;
- (void)_sync_willInvalidate;
- (void)addInstanceObserver:(id)a0;
- (void)bootupExtensionInstance:(id /* block */)a0;
- (id)bootupExtensionInstanceWithError:(out id *)a0;
- (void)removeInstanceObserver:(id)a0;

@end
