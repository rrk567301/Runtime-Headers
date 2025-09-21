@class NSArray, ABAddressBook;

@interface ABMetadataAddOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    ABAddressBook *_addressBookForReading;
}

- (void)main;
- (void).cxx_destruct;
- (void)_doMain;
- (unsigned long long)metadataJobType;
- (void)_writeMetaDataForPeople:(id)a0 withLock:(BOOL)a1;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1;

@end
