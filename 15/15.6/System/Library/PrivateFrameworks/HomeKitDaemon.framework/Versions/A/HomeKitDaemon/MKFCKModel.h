@class NSArray, NSString, NSUUID, NSDate, NSNumber;

@interface MKFCKModel : HMDManagedObject {
    NSNumber *_canonical;
}

@property (class, readonly) NSArray *defaultPreloadedProperties;
@property (class, readonly) NSString *rootKeyPath;
@property (class, readonly) unsigned long long cloudStoreTypes;

@property (copy, nonatomic) NSUUID *primitiveFlags;
@property (readonly, nonatomic) char shouldSkipValidationDuringImport;
@property (readonly, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (copy, nonatomic) NSUUID *flags;
@property (readonly, nonatomic, getter=isFake) char fake;
@property (copy, nonatomic) NSUUID *modelID;

+ (id)logCategory;
+ (id)modelWithModelID:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)appendDefaultPreloadedPropertiesTo:(id)a0;
+ (id)canonicalModelForModels:(id)a0 context:(id)a1;
+ (id)createWithLocalModel:(id)a0 context:(id)a1;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;
+ (id)mergedDictionaryFromCloud:(id)a0 localModifications:(id)a1;
+ (id)modelWithObjectID:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)predicateWithModelID:(id)a0;
+ (id)predicateWithModelIDs:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)awakeFromInsert;
- (void)didTurnIntoFault;
- (void)willSave;
- (void)convertToFakeModel;
- (char)copyPropertiesFromLocalModel:(id)a0 context:(id)a1;
- (char)copyPropertiesIntoLocalModel:(id)a0 context:(id)a1;
- (id)createLocalModelWithContext:(id)a0;
- (long long)ensureCanonicalModel;
- (id)fetchEquivalentModels:(id *)a0;
- (id)fetchLocalModelWithContext:(id)a0;
- (id)hmd_debugIdentifier;
- (char)isDeletedLocallyWithContext:(id)a0;
- (id)predicateMatchingEquivalentModels;
- (id)relationshipForLocalName:(id)a0 localModel:(id)a1;
- (char)shouldExportUpdatedPropertyInSet:(id)a0 name:(id)a1;
- (char)validateFlags:(id *)a0 error:(id *)a1;
- (char)validateModelID:(id *)a0 error:(id *)a1;
- (char)validateWriterTimestamp:(id *)a0 error:(id *)a1;
- (char)validateWriterVersion:(id *)a0 error:(id *)a1;

@end
