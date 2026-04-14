@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase;

- (id)description;
- (id)init;
- (long long)count;
- (id)allObjects;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allItems;
- (id)descriptionWithItem:(BOOL)a0;
- (id)_descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (void)addCloudRecord:(id)a0 forContainerDatabaseIdentifier:(id)a1;
- (void)applyCloudRecordArray:(id)a0;
- (id)allObjectsByDatabaseIdentifier;
- (id)allRecordsWithRecordType:(id)a0;
- (id)allRecordNames;
- (id)allRecordIDs;

@end
