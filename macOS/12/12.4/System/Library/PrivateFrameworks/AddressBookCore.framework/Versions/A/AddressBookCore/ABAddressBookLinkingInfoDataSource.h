@class NSString, ABAddressBook;

@interface ABAddressBookLinkingInfoDataSource : NSObject <ABLinkingInfoDataSource> {
    ABAddressBook *_addressBook;
}

@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAddressBook:(id)a0;
- (id)insertedRecords;
- (void)linkInsertedRecords:(id)a0;
- (id)updatedRecords;
- (id)linkIdentifiersOfDeletedRecords;
- (void)setRecordPreferredForName:(id)a0;
- (id)linkIdentifierForRecord:(id)a0;
- (BOOL)property:(id)a0 hasChangedOnRecord:(id)a1;
- (id)_nameBasedIndexingKeyForCompany:(id)a0;
- (id)_nameBasedIndexingKeyForPerson:(id)a0;
- (void)_performWithUnscopedAdapter:(id /* block */)a0;
- (id)allRecords;
- (id)recordsForUniqueIds:(id)a0;
- (id)recordsWithLinkIdentifier:(id)a0;
- (id)uniqueIdForRecord:(id)a0;
- (id /* block */)recordToUniqueIdTransform;
- (id /* block */)recordToAccountURITransform;
- (id)nameBasedIndexingKeyForRecord:(id)a0;
- (void)linkRecord:(id)a0 toRecord:(id)a1;
- (void)setLinkId:(id)a0 forRecord:(id)a1;
- (BOOL)recordSupportsLinking:(id)a0;
- (BOOL)recordIsOnlyRecordInLink:(id)a0;
- (void)unlinkRecord:(id)a0;
- (void)setRecordPreferredForName:(id)a0 linkedRecords:(id)a1;
- (void)setRecordPreferredForPhoto:(id)a0;
- (void)setRecordPreferredForPhoto:(id)a0 linkedRecords:(id)a1;
- (id)nameCollisionMapForExistingRecords;
- (id)nameCollisionMapForRecords:(id)a0;
- (id)recordsForIdentifiers:(id)a0;
- (BOOL)personIsMe:(id)a0;
- (id)nameForRecord:(id)a0;

@end
