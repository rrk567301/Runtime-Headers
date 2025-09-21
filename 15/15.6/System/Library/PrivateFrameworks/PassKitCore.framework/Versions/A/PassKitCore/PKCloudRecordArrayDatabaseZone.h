@class NSString, NSMutableDictionary, CKRecordZoneID;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {
    CKRecordZoneID *_zoneID;
    NSString *_databaseIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByZoneRecord;

- (id)description;
- (void).cxx_destruct;
- (id)allObjects;
- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allItems;
- (id)allRecordIDs;
- (void)addCloudRecord:(id)a0;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordDatabaseZone:(id)a0;
- (id)descriptionWithDetailedOutput:(char)a0 includeItem:(char)a1;
- (id)initWithZoneID:(id)a0 databaseIdentifier:(id)a1;

@end
