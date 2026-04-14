@class FPDExtension, NSString, FPItem, FPDDomain, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender> {
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    unsigned long long _numFoldersPoped;
    BOOL _done;
    NSError *_error;
    NSMutableArray *_enumeratorByDepth;
    NSMutableArray *_remainingItemsByDepth;
    FPDExtension *_provider;
    FPDDomain *_domain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) NSString *prettyDescription;
@property (readonly) double timeout;
@property unsigned long long timeoutState;

- (void)dealloc;
- (id)error;
- (void).cxx_destruct;
- (void)_next;
- (BOOL)done;
- (void)_invalidateWithError:(id)a0;
- (void)enumerationResultsDidChange;
- (void)didUpdateItem:(id)a0;
- (id)nextWithError:(id *)a0;
- (unsigned long long)numFoldersPopped;
- (id)initWithItem:(id)a0 provider:(id)a1;
- (void)_popFolder;
- (void)_pushFolder:(id)a0;
- (id)_popItem;
- (BOOL)_createEnumerator;
- (BOOL)_enumerateMoreItems;
- (void)_decorateItem:(id)a0;
- (BOOL)_shouldTraverseSubTree:(id)a0;

@end
