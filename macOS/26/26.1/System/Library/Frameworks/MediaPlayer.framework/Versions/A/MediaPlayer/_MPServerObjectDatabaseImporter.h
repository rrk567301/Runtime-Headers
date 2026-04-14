@class NSString, MSVSQLDatabaseTransaction, MSVSQLStatement;

@interface _MPServerObjectDatabaseImporter : NSObject <MPServerObjectDatabaseOperations> {
    MSVSQLDatabaseTransaction *_transaction;
    MSVSQLStatement *_insertObjectStatement;
    MSVSQLStatement *_insertPlaceholderObjectStatement;
    MSVSQLStatement *_insertObjectRelationshipStatement;
    MSVSQLStatement *_insertAssetURLStatement;
    MSVSQLStatement *_insertHLSAssetURLStatement;
    MSVSQLStatement *_removeRelationshipsStatement;
    MSVSQLStatement *_updateMiniSINFStatement;
    MSVSQLStatement *_updateSINFStatement;
    MSVSQLStatement *_updateAssetURLStatement;
    MSVSQLStatement *_existingAssetStatement;
    MSVSQLStatement *_existingHLSAssetStatement;
}

@property (readonly, nonatomic) long long importedObjectsCount;
@property (readonly, nonatomic) long long importedAssetsCount;
@property (readonly, nonatomic) long long importedHLSAssetsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_existingAssetMatchingIdentifier:(id)a0 hashedPersonID:(id)a1 flavor:(long long)a2;
- (id)_existingHLSAssetMatchingIdentifier:(id)a0 hashedPersonID:(id)a1;
- (BOOL)_importAssetFullSINF:(id)a0 forIdentifier:(id)a1 hashedPersonID:(id)a2 flavor:(long long)a3;
- (BOOL)_importAssetMiniSINF:(id)a0 forIdentifier:(id)a1 hashedPersonID:(id)a2 flavor:(long long)a3;
- (BOOL)importAssetSinf:(id)a0 type:(long long)a1 forIdentifier:(id)a2 hashedPersonID:(id)a3 flavor:(long long)a4 sinfPayload:(id)a5;
- (BOOL)importAssetURLString:(id)a0 forIdentifiers:(id)a1 flavor:(long long)a2 expirationDate:(id)a3;
- (BOOL)importHLSAssetURLString:(id)a0 keyCertificateURL:(id)a1 keyServerURL:(id)a2 redeliveryId:(long long)a3 protocolType:(id)a4 isiTunesStoreStream:(BOOL)a5 forIdentifiers:(id)a6 expirationDate:(id)a7;
- (BOOL)importObject:(id)a0 type:(id)a1 identifiers:(id)a2 isExplicitContent:(BOOL)a3 source:(long long)a4 expiration:(id)a5;
- (BOOL)relateIdentifiers:(id)a0 type:(id)a1 toParentIdentifiers:(id)a2 parentVersionHash:(id)a3 childKey:(id)a4 order:(long long)a5;
- (BOOL)removeRelationshipsForParentIdentifiers:(id)a0 childKey:(id)a1;

@end
