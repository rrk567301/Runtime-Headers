@class NSString, WBSCyclerTestSuiteBookmarkAuxiliary, WBSCyclerIterationCounter, WBSCyclerItemListRepresentation;

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject <WBSCyclerTestSuite> {
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _bookmarksGeneratedPriorToMigration;
    WBSCyclerItemListRepresentation *_topLevelBookmarksPriorToMigration;
    char _hasValidatedResultsOfPrimaryMigration;
}

@property (readonly, nonatomic, getter=isFinished) char finished;
@property (retain, nonatomic) WBSCyclerIterationCounter *iterationCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)setValue:(id)a0 forConfigurationKey:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_errorWithCode:(long long)a0;
- (void)_createRandomBookmarkWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (id)_descriptionForErrorCode:(long long)a0;
- (void)_fetchBookmarksPriorToMigrationWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)_migrateToCloudKitWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)_validateResultsOfMigrationWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)runWithTarget:(id)a0 completionHandler:(id /* block */)a1;

@end
