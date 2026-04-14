@class NSString, NSConditionLock, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface SCTGRLIndex : NSObject <NSCoding, HPDQueryDelegate> {
    NSMutableArray *mGRLs;
    NSMutableArray *mSubIndices;
    long long mUpdateLevel;
    NSConditionLock *mSearchThreadLock;
    NSConditionLock *mCustomSearchThreadLock;
    unsigned long long mQuerySequenceNumber;
    unsigned long long mSearchLimit;
    BOOL mQueryResultsReceived;
    NSMutableArray *mHelpItemResults;
    NSDictionary *mKeyToLocalizedStringTable;
    NSMutableDictionary *mLocalizedStringToKeysTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIndex;
+ (id)indexFromURL:(id)a0;
+ (id)indexFromStorage;
+ (id)previouslyIndexedWindows;
+ (unsigned long long)processGRLs:(id)a0 currentGRL:(unsigned long long)a1 withTitle:(id)a2 withCurrentPriority:(float)a3 pruneList:(id)a4;
+ (void)pruneGRLs:(id)a0 toLimit:(unsigned long long)a1 results:(id)a2;

- (void)dealloc;
- (id)init;
- (BOOL)allowsKeyedCoding;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)beginUpdate;
- (void)endUpdate;
- (id)localizedString:(id)a0;
- (void)helpQuery:(id)a0 didReturnResults:(id)a1;
- (void)helpQueryDidFinishSearching:(id)a0;
- (id)urlToWriteIndexToStorage;
- (void)writeIndexToStorage;
- (void)buildLocalizedStringToKeysTable;
- (void)readLocalizedSearchData;
- (id)keysForLocalizedString:(id)a0;
- (id)extractStringFromLocalizedStringData:(id)a0;
- (BOOL)matchLocalizedString:(id)a0 forKeys:(id)a1;
- (id)grls;
- (long long)grlCount;
- (unsigned long long)searchLimit;
- (BOOL)isInUpdate;
- (void)indexCarbonMenu:(struct OpaqueMenuRef { } *)a0 withParentMenu:(id)a1 resultGRLs:(id)a2 isRootMenu:(BOOL)a3 systemHelpMenu:(struct OpaqueMenuRef { } *)a4 withDepth:(long long)a5;
- (void)indexMenuBar:(id)a0;
- (void)indexMenuBarDynamically;
- (void)indexExternalApp:(id)a0;
- (void)analyzeAndIndexApp;
- (void)appendGRLs:(id)a0;
- (id)removeAllGRLs;
- (void)addSubIndex:(id)a0;
- (void)enumerateSubIndices:(id)a0;
- (void)handleHelpQuery:(id)a0;
- (unsigned long long)findGRLsContainingString:(id)a0 limitResultsTo:(unsigned long long)a1;
- (void)cancelPendingSearch;
- (void)dumpGRLs;

@end
