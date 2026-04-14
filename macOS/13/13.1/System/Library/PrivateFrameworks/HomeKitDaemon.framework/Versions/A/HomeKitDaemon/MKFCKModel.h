@class NSArray, NSString, NSUUID, NSDate, NSNumber;

@interface MKFCKModel : HMDManagedObject {
    NSNumber *_canonical;
}

@property (class, readonly) NSArray *defaultPreloadedProperties;
@property (class, readonly) NSString *rootKeyPath;
@property (class, readonly) unsigned long long cloudStoreTypes;

@property (copy, nonatomic) NSUUID *primitiveFlags;
@property (readonly, nonatomic) BOOL shouldSkipValidationDuringImport;
@property (readonly, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (copy, nonatomic) NSUUID *flags;
@property (readonly, nonatomic, getter=isFake) BOOL fake;
@property (copy, nonatomic) NSUUID *modelID;

+ (id)logCategory;
+ (id)createWithLocalModel:(id)a0 context:(id)a1;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;
+ (id)appendDefaultPreloadedPropertiesTo:(id)a0;
+ (id)predicateWithModelID:(id)a0;
+ (id)predicateWithModelIDs:(id)a0;
+ (id)modelWithObjectID:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)modelWithModelID:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)canonicalModelForModels:(id)a0 context:(id)a1;

- (id)description;
- (id)debugDescription;
- (id)redactedDescription;
- (void).cxx_destruct;
- (void)awakeFromInsert;
- (void)willSave;
- (void)didTurnIntoFault;
- (long long)ensureCanonicalModel;
- (id)fetchLocalModelWithContext:(id)a0;
- (id)createLocalModelWithContext:(id)a0;
- (id)hmd_debugIdentifier;
- (id)fetchEquivalentModels:(id *)a0;
- (BOOL)validateModelID:(id *)a0 error:(id *)a1;
- (void)convertToFakeModel;
- (BOOL)copyPropertiesIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)copyPropertiesFromLocalModel:(id)a0 context:(id)a1;
- (id)relationshipForLocalName:(id)a0 localModel:(id)a1;
- (BOOL)isDeletedLocallyWithContext:(id)a0;
- (id)predicateMatchingEquivalentModels;
- (BOOL)validateWriterTimestamp:(id *)a0 error:(id *)a1;
- (BOOL)validateWriterVersion:(id *)a0 error:(id *)a1;
- (BOOL)validateFlags:(id *)a0 error:(id *)a1;

@end
