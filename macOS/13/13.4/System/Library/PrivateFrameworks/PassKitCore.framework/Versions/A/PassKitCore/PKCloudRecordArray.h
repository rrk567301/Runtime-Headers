@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase;
@property (retain, nonatomic) NSMutableDictionary *reportItemsByAccountIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)allObjects;
- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allItems;
- (id)_descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (void)addCloudRecord:(id)a0 forContainerDatabaseIdentifier:(id)a1;
- (void)addTransactionSyncReportItem:(id)a0 forAccountIdentifier:(id)a1;
- (void)addTransactionSyncReportItems:(id)a0 forAccountIdentifier:(id)a1;
- (id)allObjectsByDatabaseIdentifier;
- (id)allRecordIDs;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordArray:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (id)transactionSyncReportItemsByAccountIdentifier;

@end
