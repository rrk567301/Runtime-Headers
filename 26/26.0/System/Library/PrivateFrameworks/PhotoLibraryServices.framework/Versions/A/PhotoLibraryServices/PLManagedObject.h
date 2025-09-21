@class PLPhotoLibrary, NSExpressionDescription, NSString, PLPhotoLibraryPathManager;

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadUpdateAdapter, PLValidatedManagedObject> {
    unsigned short _willSaveCallCount;
}

@property (class, readonly) NSExpressionDescription *objectIDDescription;

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property (readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)a0;
+ (id)entityInManagedObjectContext:(id)a0;
+ (id)attributeValidationRules;

- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (id)payloadID;
- (void)didSave;
- (BOOL)isSyncableChange;
- (id)duplicateSortPropertyNames;
- (id)payloadIDForTombstone:(id)a0;
- (id)duplicateSortPropertyNamesSkip;
- (BOOL)supportsCloudUpload;
- (id)managedObject;
- (BOOL)isValidForJournalPersistence;
- (id)payloadsForChangedKeys:(id)a0;
- (id)sourceObject;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)pl_committedValueForKey:(id)a0;
- (float)pl_floatValueForKey:(id)a0;
- (short)pl_int16ValueForKey:(id)a0;
- (int)pl_int32ValueForKey:(id)a0;
- (long long)pl_int64ValueForKey:(id)a0;
- (void)pl_safeSetValue:(id)a0 forKey:(id)a1 valueDidChangeHandler:(id /* block */)a2;
- (void)pl_setValue:(id)a0 forKey:(id)a1 valueDidChangeHandler:(id /* block */)a2;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
