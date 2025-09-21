@class FPDExtension, NSString, FPItem, FPDDomain, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender> {
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    unsigned long long _numFoldersPoped;
    char _done;
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
- (void).cxx_destruct;
- (id)error;
- (char)done;
- (void)_invalidateWithError:(id)a0;
- (void)didUpdateItem:(id)a0;
- (void)enumerationResultsDidChange;
- (void)_next;
- (id)nextWithError:(id *)a0;
- (char)_createEnumerator;
- (void)_decorateItem:(id)a0;
- (char)_enumerateMoreItems;
- (void)_popFolder;
- (id)_popItem;
- (void)_pushFolder:(id)a0;
- (char)_shouldTraverseSubTree:(id)a0;
- (id)initWithItem:(id)a0 provider:(id)a1;
- (unsigned long long)numFoldersPopped;

@end
