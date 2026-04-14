@class NSLock;

@interface NSPrefPaneSearchCenter : NSObject {
    struct __SKIndex { } *mIndexRef;
    BOOL mValidated;
    BOOL mDebug;
    NSLock *mSKLock;
}

+ (id)sharedCenter;
+ (id)preferencesSearchIndexCacheFilePath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setValidated;
- (void)createSearchIndexForPrefPaneBundles:(id)a0;
- (id)_indexExtensions;
- (id)searchString:(id)a0 inPreferencePane:(id)a1;
- (BOOL)openSearchIndex;
- (id)loadSearchTermsForPath:(id)a0 key:(id)a1;
- (id)searchString:(id)a0;

@end
