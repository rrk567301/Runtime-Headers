@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject {
    NSMutableDictionary *_identifierToParserZones;
}

- (void)removeIdentifiers:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)allRecords;
- (void)addRecord:(id)a0 identifier:(id)a1;
- (id)allRecordsWithIdentifier:(id)a0;

@end
