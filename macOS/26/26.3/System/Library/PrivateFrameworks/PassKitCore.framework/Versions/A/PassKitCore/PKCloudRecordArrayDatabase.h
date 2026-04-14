@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone;

- (long long)count;
- (id)allItems;
- (id)initWithIdentifier:(id)a0;
- (id)allRecordIDs;
- (id)description;
- (id)allObjects;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addCloudRecord:(id)a0;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordDatabase:(id)a0;
- (id)countByZoneID;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;

@end
