@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone;

- (id)initWithIdentifier:(id)a0;
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
- (void)applyCloudRecordDatabase:(id)a0;
- (id)countByZoneID;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;

@end
