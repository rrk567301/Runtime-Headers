@class _INVocabularyGenerationDocument, NSString, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject {
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    char _deleteExistingVocabulary;
    char _vocabularyUpdatesEnabled;
}

@property (readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument;
@property (readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument;
@property (nonatomic) char fullResetRequired;

+ (id)beginTransactionForBundleID:(id)a0 bundlePath:(id)a1 syncSlot:(id)a2;

- (void).cxx_destruct;
- (id)calculateDiff;
- (void)_saveAndCleanup;
- (void)_beginTransaction;
- (void)_deleteInvalidSavedData;
- (id)_emptySentDocument;
- (id)_initWithVocabularyManager:(id)a0 syncSlot:(id)a1 deleteExistingVocabulary:(char)a2;
- (char)_isMissingLatestFileError:(id)a0;
- (void)endTransactionWithFinalAnchor:(id)a0;

@end
