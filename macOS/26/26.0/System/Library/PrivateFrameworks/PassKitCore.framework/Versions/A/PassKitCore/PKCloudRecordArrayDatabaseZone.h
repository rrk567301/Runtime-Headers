@class NSString, NSMutableDictionary, CKRecordZoneID;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {
    CKRecordZoneID *_zoneID;
    NSString *_databaseIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByZoneRecord;

- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)allItems;
- (id)allObjects;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)allRecordIDs;
- (void).cxx_destruct;
- (void)addCloudRecord:(id)a0;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordDatabaseZone:(id)a0;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (id)initWithZoneID:(id)a0 databaseIdentifier:(id)a1;

@end
