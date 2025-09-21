@class NSString, NSData, NSNumber, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) char isManaged;
@property (nonatomic) char shareWebUsage;
@property (copy, nonatomic) NSNumber *isAppAndWebsiteActivityEnabled;
@property (retain, nonatomic) STFamilyOrganization *organization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *versionVector;
@property (nonatomic) char isDirty;

- (void)didChangeValueForKey:(id)a0;
- (id)redactedDescription;
- (id)dictionaryRepresentation;
- (char)validateForDelete:(id *)a0;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (char)_validateOrganization:(id)a0;
- (char)_validateUser:(id)a0;
- (id)computeUniqueIdentifier;
- (char)updateWithDictionaryRepresentation:(id)a0;

@end
