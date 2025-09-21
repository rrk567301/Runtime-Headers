@class NSArray, NSDictionary, NSSet, NSString, _PFVMData, NSMutableDictionary;

@interface NSManagedObjectModel : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {
    _PFVMData *_dataForOptimization;
    id *_optimizationHints;
    id *_additionalPrivateIvars;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags { unsigned char _isInUse : 1; unsigned char _isImmutable : 1; unsigned char _isOptimizedForEncoding : 1; unsigned char _hasEntityWithConstraints : 1; unsigned char _skipUserInfoTombstones : 1; unsigned int _reservedEntityDescription : 27; } _managedObjectModelFlags;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, setter=_setModelsReferenceIDOffset:) long long _modelsReferenceIDOffset;
@property (readonly, copy) NSDictionary *entitiesByName;
@property (retain) NSArray *entities;
@property (readonly) NSArray *configurations;
@property (retain) NSDictionary *localizationDictionary;
@property (readonly, copy) NSDictionary *fetchRequestTemplatesByName;
@property (copy) NSSet *versionIdentifiers;
@property (readonly, copy) NSDictionary *entityVersionHashesByName;
@property (readonly, copy) NSString *versionChecksum;

+ (id)mergedModelFromBundles:(id)a0;
+ (long long)_debugOptimizedModelLayout;
+ (id)checksumsForVersionedModelAtURL:(id)a0 error:(id *)a1;
+ (id)mergedModelFromBundles:(id)a0 forStoreMetadata:(id)a1;
+ (id)modelByMergingModels:(id)a0;
+ (id)modelByMergingModels:(id)a0 forStoreMetadata:(id)a1;
+ (char)versionHashes:(id)a0 compatibleWithStoreMetadata:(id)a1;
+ (id)versionsHashesForModelAtURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (void)_addEntity:(id)a0;
- (char)isEditable;
- (char)isConfiguration:(id)a0 compatibleWithStoreMetadata:(id)a1;
- (id)_initWithContentsOfURL:(id)a0 options:(unsigned long long)a1;
- (void)_setIsEditable:(char)a0;
- (id)initWithContentsOfOptimizedURL:(id)a0;
- (void)_createCachesAndOptimizeState;
- (void)_flattenProperties;
- (id)_initWithEntities:(id)a0;
- (id)_localizationPolicy;
- (id)_modelForVersionHashes:(id)a0;
- (id)_optimizedEncoding:(id *)a0;
- (void)_restoreValidation;
- (void)_setIsEditable:(char)a0 optimizationStyle:(unsigned long long)a1;
- (void)_setLocalizationPolicy:(id)a0;
- (void)_stripForMigration;
- (void)_throwIfNotEditable;
- (id)entitiesForConfiguration:(id)a0;
- (id)fetchRequestFromTemplateWithName:(id)a0 substitutionVariables:(id)a1;
- (id)fetchRequestTemplateForName:(id)a0;
- (id)immutableCopy;
- (id)initWithContentsOfURL:(id)a0 forStoreMetadata:(id)a1;
- (void)setEntities:(id)a0 forConfiguration:(id)a1;
- (void)setFetchRequestTemplate:(id)a0 forName:(id)a1;
- (id)versionHash;

@end
