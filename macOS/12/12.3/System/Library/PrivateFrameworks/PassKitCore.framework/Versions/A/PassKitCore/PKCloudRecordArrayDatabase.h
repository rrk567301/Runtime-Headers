@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone;

- (id)description;
- (long long)count;
- (id)allObjects;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)allItems;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (id)countByZoneID;
- (void)addCloudRecord:(id)a0;
- (void)applyCloudRecordDatabase:(id)a0;
- (id)allRecordsWithRecordType:(id)a0;
- (id)allRecordNames;
- (id)allRecordIDs;

@end
