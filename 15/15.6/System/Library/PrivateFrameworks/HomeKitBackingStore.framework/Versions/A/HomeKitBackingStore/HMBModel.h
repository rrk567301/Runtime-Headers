@class NSUUID, NSString, NSArray, HMBModelContainer, NSSet, NSMutableDictionary, NSDictionary, HMFVersion;

@interface HMBModel : HMFObject <HMFLogging, HMBModelProperties>

@property (class, readonly, nonatomic) char hmbShouldLogPrivateInformation;
@property (class, readonly, nonatomic) NSSet *hmbExternalProperties;
@property (class, readonly, nonatomic) NSSet *hmbExternalRecordFields;
@property (class, readonly, nonatomic) NSUUID *hmbSchemaHashRoot;
@property (class, readonly, nonatomic) char hmbExcludeFromCloudStorage;
@property (class, readonly, nonatomic) NSString *hmbExternalRecordType;
@property (class, readonly, nonatomic) NSDictionary *hmbProperties;
@property (class, readonly, copy, nonatomic) NSSet *hmbPropertyNames;
@property (class, readonly, nonatomic) NSArray *hmbQueries;
@property (class, readonly, nonatomic) NSSet *hmbModelClassesWithQueries;
@property (class, readonly, nonatomic) HMFVersion *hmbReadOnlyBefore;
@property (class, readonly, nonatomic) Class hmbGenericRepresentation;

@property (weak, nonatomic) HMBModelContainer *hmbModelContainer;
@property (retain, nonatomic) HMFVersion *hmbDataVersion;
@property (retain, nonatomic) NSUUID *hmbModelID;
@property (retain, nonatomic) NSUUID *hmbParentModelID;
@property (retain, nonatomic) NSString *hmbType;
@property (retain, nonatomic) NSSet *hmbUnavailableProperties;
@property (retain, nonatomic) NSSet *hmbReadOnlyProperties;
@property (nonatomic) unsigned long long hmbRecordRow;
@property (readonly, copy, nonatomic) NSSet *hmbSetExternalProperties;
@property (readonly, copy, nonatomic) NSSet *hmbSetExternalRecordFields;
@property (retain, nonatomic) NSMutableDictionary *hmbReserved;
@property (readonly, nonatomic) NSString *hmbCanonicalType;
@property (readonly, nonatomic) NSSet *hmbSetProperties;
@property (readonly, nonatomic) HMFVersion *hmbContainerDataVersion;
@property (readonly, nonatomic) NSString *hmbDescription;
@property (readonly, nonatomic) char hmbIsModelReadOnly;
@property (readonly, nonatomic) char hmbIsModelGenericRepresentation;
@property (retain, nonatomic) HMFVersion *hmbMinimumSupportedVersion;
@property (readonly, nonatomic) char hmbIgnoreModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)resolveInstanceMethod:(SEL)a0;
+ (id)logCategory;
+ (id)formattedStringForValue:(id)a0;
+ (id)hmbMutableModelClassesWithQueries;
+ (void)hmbPrepareQueries;
+ (char)propertyDiffersFrom:(id)a0 to:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)logUUID;
- (id)attributeDescriptions;
- (void)hmbMergeSetPropertiesFromModel:(id)a0;
- (char)_validateType:(id)a0 error:(id *)a1;
- (void)dumpDebug;
- (void)dumpDebug:(id)a0;
- (void)hmbAssociateWithContainer:(id)a0;
- (char)hmbCanonicalTypeInferred;
- (id)hmbDefaultValueForPropertyNamed:(id)a0;
- (char)hmbIsDifferentFromModel:(id)a0 differingFields:(id *)a1;
- (id)hmbModelByMergingFromModel:(id)a0 isFromCloud:(char)a1 error:(id *)a2;
- (id)hmbModelByMergingSetPropertiesFromModel:(id)a0;
- (id)hmbPrepareForStorageLocation:(unsigned long long)a0;
- (char)hmbPropertyIsAvailable:(id)a0;
- (char)hmbPropertyIsReadOnly:(id)a0;
- (id)hmbPropertyNamed:(id)a0;
- (id)hmbPropertyNamed:(id)a0 isSet:(char *)a1;
- (char)hmbPropertyWasSet:(id)a0;
- (void)hmbSetProperty:(id)a0 named:(id)a1;
- (void)hmbUnsetPropertyNamed:(id)a0;
- (char)hmbValidForStorage:(id)a0;
- (id)initWithModelID:(id)a0 parentModelID:(id)a1;
- (id)populateModelWithDictionary:(id)a0 fromStorageLocation:(unsigned long long)a1 using:(id)a2;
- (id)prepareForStorageLocation:(unsigned long long)a0 using:(id)a1 updatedModelIDs:(id)a2 error:(id *)a3;
- (id)validateType:(id)a0 path:(id)a1;

@end
