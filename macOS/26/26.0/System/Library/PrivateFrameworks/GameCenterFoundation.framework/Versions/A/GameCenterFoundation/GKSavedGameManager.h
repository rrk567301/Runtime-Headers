@class NSMutableDictionary, NSURL, NSMetadataQuery, NSMutableArray;

@interface GKSavedGameManager : NSObject

@property (retain, nonatomic) NSURL *ubiquityURL;
@property (nonatomic) BOOL ubiquityUnavailable;
@property (retain, nonatomic) NSMetadataQuery *query;
@property (retain, nonatomic) NSMutableDictionary *documents;
@property (nonatomic) long long queryDisableCount;
@property (retain, nonatomic) NSMutableArray *fetchHandlers;

+ (id)sharedManager;

- (void)removeDocument:(id)a0;
- (void)queryDidFinishGathering:(id)a0;
- (void)documentConflictStateChanged:(id)a0;
- (void)enableQueryUpdates;
- (void)queryDidUpdate:(id)a0;
- (void)ubiquityAvailabilityChanged:(id)a0;
- (void)resolveConflictingSavedGames:(id)a0 withData:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)a0;
- (id)errorForNoUbiquity;
- (id)documentToSaveWithName:(id)a0;
- (id)fileURLForName:(id)a0;
- (void)addDocument:(id)a0;
- (id)currentDocumentWithName:(id)a0;
- (void)startSavedGameQuery;
- (id)documentForSavedGame:(id)a0;
- (id)init;
- (void)callFetchHandlers;
- (void)disableQueryUpdates;
- (void)documentModified:(id)a0;
- (void)loadDataForSavedGame:(id)a0 completionHandler:(id /* block */)a1;
- (id)savedGameForDocuments:(id)a0;
- (void)saveGameData:(id)a0 withName:(id)a1 completionHandler:(id /* block */)a2;
- (id)savedGameForDocument:(id)a0;
- (void)deleteSavedGamesWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupUbiquity;
- (id)savedGamesWithName:(id)a0;
- (void).cxx_destruct;

@end
