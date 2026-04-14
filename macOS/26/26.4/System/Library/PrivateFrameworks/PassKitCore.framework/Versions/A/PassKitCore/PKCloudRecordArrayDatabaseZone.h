@class NSString, NSMutableDictionary, CKRecordZoneID;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {
    CKRecordZoneID *_zoneID;
    NSString *_databaseIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByZoneRecord;

- (id)allItems;
- (id)allObjects;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)count;
- (id)description;
- (id)allRecordIDs;
- (id)initWithCoder:(id)a0;
- (void)addCloudRecord:(id)a0;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordDatabaseZone:(id)a0;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (id)initWithZoneID:(id)a0 databaseIdentifier:(id)a1;

@end
