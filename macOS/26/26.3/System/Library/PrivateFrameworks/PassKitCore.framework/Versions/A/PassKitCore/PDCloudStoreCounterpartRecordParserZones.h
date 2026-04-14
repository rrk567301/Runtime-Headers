@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject {
    NSMutableDictionary *_zoneNameToRecords;
}

- (void)addRecord:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)allRecords;
- (void)removeIdentifiers:(id)a0;

@end
