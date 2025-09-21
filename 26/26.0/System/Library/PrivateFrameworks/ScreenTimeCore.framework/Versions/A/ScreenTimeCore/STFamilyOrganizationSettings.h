@class NSString, NSSet, NSData, NSNumber, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL shareWebUsage;
@property (copy, nonatomic) NSNumber *isAppAndWebsiteActivityEnabled;
@property (retain, nonatomic) STFamilyOrganization *organization;
@property (retain, nonatomic) NSSet *appExceptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *versionVector;
@property (nonatomic) BOOL isDirty;

- (BOOL)validateForUpdate:(id *)a0;
- (id)dictionaryRepresentation;
- (BOOL)validateForInsert:(id *)a0;
- (id)computeUniqueIdentifier;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (void)didChangeValueForKey:(id)a0;
- (id)redactedDescription;
- (BOOL)_validateOrganization:(id)a0;
- (BOOL)_validateUser:(id)a0;

@end
