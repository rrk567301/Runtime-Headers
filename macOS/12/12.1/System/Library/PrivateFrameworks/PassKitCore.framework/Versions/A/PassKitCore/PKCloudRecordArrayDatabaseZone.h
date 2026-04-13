@class NSString, NSMutableDictionary, CKRecordZoneID;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {
    CKRecordZoneID *_zoneID;
    NSString *_databaseIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByZoneRecord;

- (id)description;
- (long long)count;
- (id)allObjects;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allItems;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (void)addCloudRecord:(id)a0;
- (id)allRecordsWithRecordType:(id)a0;
- (id)allRecordNames;
- (id)allRecordIDs;
- (void)applyCloudRecordDatabaseZone:(id)a0;
- (id)initWithZoneID:(id)a0 databaseIdentifier:(id)a1;

@end
