@class NSArray, NSIndexSet, DS_TKeyValueObserverGlue, NSMetadataQuery, NSObject;

@interface DSFileUbiquityObserver : NSObject {
    struct TNSRef<NSMetadataQuery, void> { NSMetadataQuery *fRef; } _query;
    struct TNodePtr { struct TNode *fCountedNode; } fParentNode;
    BOOL fSelfObserving;
    struct TKeyValueObserver { struct TNSRef<DS_TKeyValueObserverGlue, void> { DS_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _resultsObserver;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)updateNodes:(id)a0;
- (void)startObserving:(id)a0;
- (void)updateNodesFromResults;
- (void)resultsChanged:(id)a0 kind:(unsigned long long)a1;

@end
