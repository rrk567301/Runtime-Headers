@class NSString, NSError, FPItemCollection;

@interface DSFPItemStatusObserver : NSObject <FPItemCollectionItemIDBasedDelegate> {
    struct TNodePtr { struct TNode *fCountedNode; } _parentNode;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _parentIdentifier;
    struct TNSRef<FPItemCollection, void> { FPItemCollection *fRef; } _collection;
    struct TNSRef<NSError, void> { NSError *fRef; } _FPError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)startObserving:(id)a0 forParent:(const struct TNodePtr { struct TNode *x0; } *)a1 withQueue:(id)a2;
- (void)resetError;
- (void)updateNodesFPItemsFromCollection:(const void *)a0;
- (void)updateFPItems:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)collection:(id)a0 didUpdateObservedItem:(id)a1;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (struct TNSRef<NSError, void> { id x0; })fpError;

@end
