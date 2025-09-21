@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase;
@property (retain, nonatomic) NSMutableDictionary *reportItemsByAccountIdentifier;
@property (nonatomic) long long recordsFetchedCount;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)allObjects;
- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allItems;
- (id)allRecordIDs;
- (id)_descriptionWithDetailedOutput:(char)a0 includeItem:(char)a1;
- (void)addCloudRecord:(id)a0 forContainerDatabaseIdentifier:(id)a1;
- (void)addCountToRecordsFetched:(long long)a0;
- (void)addTransactionSyncReportItem:(id)a0 forAccountIdentifier:(id)a1;
- (void)addTransactionSyncReportItems:(id)a0 forAccountIdentifier:(id)a1;
- (id)allObjectsByDatabaseIdentifier;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordArray:(id)a0;
- (id)descriptionWithItem:(char)a0;
- (id)transactionSyncReportItemsByAccountIdentifier;

@end
