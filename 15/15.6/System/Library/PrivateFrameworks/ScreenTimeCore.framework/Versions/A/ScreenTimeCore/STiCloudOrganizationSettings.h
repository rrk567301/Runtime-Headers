@class NSString, STiCloudOrganization;

@interface STiCloudOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) char isAppAndWebsiteActivityEnabled;
@property (retain, nonatomic) STiCloudOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (char)validateForDelete:(id *)a0;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (char)_validateNumberOfCloudSettings:(id)a0;
- (char)_validateUser:(id)a0;
- (id)computeUniqueIdentifier;
- (char)updateWithDictionaryRepresentation:(id)a0;

@end
