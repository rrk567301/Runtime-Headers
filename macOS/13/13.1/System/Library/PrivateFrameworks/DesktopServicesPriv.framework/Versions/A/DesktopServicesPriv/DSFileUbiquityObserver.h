@class NSArray, NSIndexSet, FINode, DS_TKeyValueObserverGlue, NSObject, NSMetadataQuery;

@interface DSFileUbiquityObserver : NSObject {
    struct TKeyValueObserver { DS_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _resultsObserver;
    struct TNodePtr { FINode *fFINode; } fParentNode;
    NSMetadataQuery *_query;
    BOOL fSelfObserving;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)startObserving:(id)a0;
- (void)updateNodesFromResults;
- (void)updateNodes:(id)a0;
- (void)resultsChanged:(id)a0 kind:(unsigned long long)a1;

@end
