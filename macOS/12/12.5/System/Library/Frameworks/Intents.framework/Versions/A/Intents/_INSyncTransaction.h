@class _INVocabularyGenerationDocument, NSString, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject {
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    BOOL _deleteExistingVocabulary;
    BOOL _vocabularyUpdatesEnabled;
}

@property (readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument;
@property (readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument;
@property (nonatomic) BOOL fullResetRequired;

+ (id)beginTransactionForBundleID:(id)a0 bundlePath:(id)a1 syncSlot:(id)a2;

- (void).cxx_destruct;
- (id)calculateDiff;
- (void)_saveAndCleanup;
- (BOOL)_isMissingLatestFileError:(id)a0;
- (void)_deleteInvalidSavedData;
- (id)_emptySentDocument;
- (id)_initWithVocabularyManager:(id)a0 syncSlot:(id)a1 deleteExistingVocabulary:(BOOL)a2;
- (void)_beginTransaction;
- (void)endTransactionWithFinalAnchor:(id)a0;

@end
