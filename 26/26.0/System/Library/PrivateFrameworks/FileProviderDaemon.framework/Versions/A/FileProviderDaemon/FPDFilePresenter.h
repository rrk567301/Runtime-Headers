@class NSData, NSString, NSURL, FPItem, FPItemID, FPDExtensionManager, NSObject, FPDDomain;
@protocol OS_dispatch_queue, FPXEnumerator;

@interface FPDFilePresenter : NSObject <FPXEnumeratorObserver, FPDLifetimeExtender> {
    FPDExtensionManager *_manager;
    id<FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_changeToken;
    FPItem *_currentItem;
    BOOL _isRunning;
    BOOL _isFetchingChanges;
    BOOL _shouldRefetchChanges;
    BOOL _presenterWantsUbiqitousAttributes;
    BOOL _passivePresenterRequested;
}

@property (retain, nonatomic) FPItemID *itemID;
@property (copy, nonatomic) id filePresenterID;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL isEnumeratorActive;
@property (readonly, nonatomic) NSURL *presentedItemURL;
@property (retain, nonatomic) FPDDomain *domain;
@property (readonly, nonatomic) FPItemID *observedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) NSString *prettyDescription;
@property (readonly) double timeout;
@property unsigned long long timeoutState;

+ (id)presenter:(id)a0 withItemID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 urlHint:(id)a3 domain:(id)a4;

- (void)start;
- (void)dumpStateTo:(id)a0;
- (void)stop;
- (id)_presentedItemDescription:(BOOL)a0;
- (void)enumerationResultsDidChange;
- (id)initWithIdentifier:(id)a0 itemID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 urlHint:(id)a3 domain:(id)a4;
- (void)didUpdateItem:(id)a0;
- (id)_newCoordinator;
- (void)_destroyEnumerator;
- (id)enumerator;
- (void)_enumeratorRequestDidFailWithXPCError:(id)a0;
- (void)_fetchChangeToken;
- (BOOL)isEqual:(id)a0;
- (void)receiveUpdatedItems:(id)a0 deletedItemsIdentifiers:(id)a1;
- (void)_fetchUpdates;
- (void).cxx_destruct;

@end
