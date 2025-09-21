@class PLPerson, NSString, PLMemory, NSDate;

@interface PLUserFeedback : PLManagedObject <PLCloudDeletable, PLFileSystemMetadataPersistence>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) NSString *uuid;
@property (nonatomic) short type;
@property (nonatomic) short feature;
@property (nonatomic) short creationType;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) PLMemory *memory;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (readonly, nonatomic) NSString *detailedDescription;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)a0 withUUID:(id)a1;
+ (id)newestUserFeedbackInSet:(id)a0;
+ (id)userFeedbackWithUUID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)_userFeedbacksMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)insertIntoManagedObjectContext:(id)a0 withDictionaryRepresentation:(id)a1;
+ (char)shouldHandleCPLSuggestionChange:(id)a0;
+ (id)updateUserFeedback:(id)a0 withCPLSuggestionChange:(id)a1 inManagedObjectContext:(id)a2;
+ (id)userFeedbacksToUploadInManagedObjectContext:(id)a0 limit:(long long)a1;
+ (id)userFeedbacksWithUUIDs:(id)a0 inManagedObjectContext:(id)a1;

- (id)dictionaryRepresentation;
- (void)prepareForDeletion;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (id)scopeIdentifier;
- (char)isValidForPersistence;
- (id)scopedIdentifier;
- (char)_isPersonFeatureAutonamingType;
- (id)_objectUsedForPersistence;
- (char)_relationshipsInInvalidState;
- (char)_validateNonNilUUID:(id *)a0;
- (char)_validateRelationshipConstraintForInsert:(char)a0 error:(id *)a1;
- (id)cplFullRecord;
- (id)cplSuggestionChange;
- (char)isSyncableChange;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (char)supportsCloudUpload;

@end
