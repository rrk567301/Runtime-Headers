@class ABAccount, NSString, ABDictionaryImporter, NSOperationQueue, ABSimilarRecordMerger, NSMutableArray, ABAddressBook;

@interface ABImportsAddressBookData : NSObject {
    ABAddressBook *_addressBook;
    ABAccount *_sourceAccount;
    ABAccount *_destinationAccount;
    ABDictionaryImporter *_importer;
    NSOperationQueue *_imageMover;
    NSMutableArray *_newRecords;
    NSString *_meCardIdentifier;
    ABSimilarRecordMerger *_merger;
    BOOL _deleteOriginalRecords;
}

+ (id)os_log;
+ (void)importRecordsFromAccount:(id)a0 intoAccount:(id)a1 addressBook:(id)a2 options:(int)a3;
+ (id)importerWithAddressBook:(id)a0 sourceAccount:(id)a1 destinationAccount:(id)a2 options:(int)a3;

- (void)dealloc;
- (void)importData;
- (id)initWithAddressBook:(id)a0 sourceAccount:(id)a1 destinationAccount:(id)a2 options:(int)a3;
- (id)newMergerWithExistingRecords;
- (id)moveRecordsIntoDestinationStore;
- (id)recordsToImport;
- (id)peopleToImport;
- (id)groupsToImport;
- (void)importRecord:(id)a0;
- (void)removeOriginalRecords:(id)a0;
- (void)setTheMeCard;
- (void)mergeNewRecordsWithPreexistingData;
- (void)assignNewRecordsToGroups;
- (void)waitForImagesToTransfer;

@end
