@class RTPersistenceMigrator, NSMutableDictionary, NSCloudKitMirroringDelegate, NSCloudKitMirroringDelegateOptions, NSPersistentStoreDescription, NSURL;

@interface RTPersistenceStore : NSObject {
    char _mirroringDelegateIntialized;
}

@property (retain, nonatomic) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (retain, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringDelegateOptions;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long mirroringDelegateState;
@property (retain, nonatomic) RTPersistenceMigrator *migrator;
@property (readonly) NSPersistentStoreDescription *storeDescription;
@property (readonly) NSURL *URL;
@property (readonly) NSMutableDictionary *userInfo;

+ (id)storeBaseName:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)error:(id *)a0 code:(unsigned long long)a1;
- (id)_normalizeError:(id)a0 storeDescription:(id)a1;
- (id)_validateKeys:(id)a0;
- (char)addToCoordinator:(id)a0 lightweightMigration:(char)a1 vacuum:(char)a2 allowMirroring:(char)a3 error:(id *)a4;
- (id)cachedModelWithError:(id *)a0;
- (char)destroyWithCoordinator:(id)a0 error:(id *)a1;
- (char)error:(id *)a0 inError:(id)a1;
- (id)initWithStoreDescription:(id)a0;
- (void)onMirroringDelegateInitialization:(id)a0;
- (char)openWithCoordinator:(id)a0 configuration:(id)a1 error:(id *)a2;
- (char)rekeyWithCoordinator:(id)a0 keyData:(id)a1 error:(id *)a2;
- (char)removeFromCoordinator:(id)a0 error:(id *)a1;
- (char)removeStoreAtURL:(id)a0 error:(id *)a1;
- (id)retrieveMetadataWithCoordinator:(id)a0 error:(id *)a1;
- (id)storeBaseName;
- (id)storeName;
- (id)storeURLsMatchingStoreName;
- (id)storeURLsMatchingStoreNameAtURL:(id)a0;
- (char)updateMetadata:(id)a0 context:(id)a1 coordinator:(id)a2 error:(id *)a3;
- (char)updateMetadata:(id)a0 coordinator:(id)a1 error:(id *)a2;

@end
