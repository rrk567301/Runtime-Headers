@class NSLock;

@interface NSPrefPaneSearchCenter : NSObject {
    struct __SKIndex { } *mIndexRef;
    char mValidated;
    char mDebug;
    NSLock *mSKLock;
}

+ (id)sharedCenter;
+ (id)preferencesSearchIndexCacheFilePath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)openSearchIndex;
- (id)_indexExtensions;
- (void)createSearchIndexForPrefPaneBundles:(id)a0;
- (id)loadSearchTermsForPath:(id)a0 key:(id)a1;
- (id)searchString:(id)a0;
- (id)searchString:(id)a0 inPreferencePane:(id)a1;
- (void)setValidated;

@end
