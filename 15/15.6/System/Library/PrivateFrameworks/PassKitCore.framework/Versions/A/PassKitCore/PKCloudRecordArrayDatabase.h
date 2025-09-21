@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone;

- (id)description;
- (void).cxx_destruct;
- (id)allObjects;
- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)allItems;
- (id)allRecordIDs;
- (void)addCloudRecord:(id)a0;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordDatabase:(id)a0;
- (id)countByZoneID;
- (id)descriptionWithDetailedOutput:(char)a0 includeItem:(char)a1;

@end
