@class NSArray, ABAddressBook;

@interface ABMetadataAddOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    ABAddressBook *_addressBookForReading;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1;
- (void)_doMain;
- (int)metadataJobType;
- (void)_writeMetaDataForPeople:(id)a0 withLock:(BOOL)a1;

@end
