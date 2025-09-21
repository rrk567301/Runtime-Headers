@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject {
    NSMutableDictionary *_identifierToParserZones;
}

- (id)allRecords;
- (id)init;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)removeIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)addRecord:(id)a0 identifier:(id)a1;
- (id)allRecordsWithIdentifier:(id)a0;

@end
