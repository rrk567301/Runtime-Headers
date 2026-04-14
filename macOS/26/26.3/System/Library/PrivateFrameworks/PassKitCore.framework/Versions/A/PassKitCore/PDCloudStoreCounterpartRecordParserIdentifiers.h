@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject {
    NSMutableDictionary *_identifierToParserZones;
}

- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)allRecords;
- (void)removeIdentifiers:(id)a0;
- (void)addRecord:(id)a0 identifier:(id)a1;
- (id)allRecordsWithIdentifier:(id)a0;

@end
