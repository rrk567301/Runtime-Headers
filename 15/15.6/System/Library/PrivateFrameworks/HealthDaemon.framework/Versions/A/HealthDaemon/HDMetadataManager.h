@class HDProfile, HDDatabaseValueCache;

@interface HDMetadataManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_keyEntityCache;
    HDDatabaseValueCache *_keyCache;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (char)insertMetadata:(id)a0 forObjectID:(id)a1 sourceID:(id)a2 externalSyncObjectCode:(long long)a3 objectDeleted:(char)a4 error:(id *)a5;
- (char)insertMetadata:(id)a0 forObjectID:(id)a1 sourceID:(id)a2 externalSyncObjectCode:(long long)a3 objectDeleted:(char)a4 transaction:(id)a5 error:(id *)a6;
- (id)metadataForObjectID:(long long)a0 baseMetadata:(id)a1 keyFilter:(id /* block */)a2 statement:(id)a3 error:(id *)a4;
- (id)predicateWithMetadataKey:(id)a0 allowedValues:(id)a1;
- (id)predicateWithMetadataKey:(id)a0 exists:(char)a1;
- (id)predicateWithMetadataKey:(id)a0 value:(id)a1 operatorType:(unsigned long long)a2;
- (id)unitTest_metadataForObjectID:(long long)a0 keyFilter:(id /* block */)a1 error:(id *)a2;
- (id)unitTest_rawMetadataForObject:(id)a0 error:(id *)a1;
- (char)updateMetadataValue:(id)a0 forKey:(id)a1 object:(id)a2 error:(id *)a3;

@end
