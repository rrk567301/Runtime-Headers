@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUInstalledUpdateJournal : NSObject

@property (retain) NSObject<OS_dispatch_queue> *updateQueue;
@property (retain) NSString *customDirectoryPath;
@property (retain) NSArray *cache;

+ (id)sharedJournal;

- (void)dealloc;
- (id)init;
- (void)_addEntriesToJournal:(id)a0;
- (void)_updateBaseSystemJournalEntries:(id)a0;
- (id)_readJournal;
- (id)_readJournalPrunedAndSorted;
- (id)_journalURL;
- (void)__updateJournalCacheIfNecessary;
- (void)addProductsToInstalledUpdateJournal:(id)a0;
- (void)updateBaseSystemJournalEntries:(id)a0;
- (id)installedUpdateJournal;
- (id)installedUpdateJournalPrunedAndSorted;
- (void)_setCustomDirectoryPath:(id)a0;

@end
