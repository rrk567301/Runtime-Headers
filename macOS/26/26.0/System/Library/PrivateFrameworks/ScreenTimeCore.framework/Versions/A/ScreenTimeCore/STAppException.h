@class NSString, STFamilyOrganizationSettings;

@interface STAppException : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (class, readonly) NSString *serializableClassName;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long adamID;
@property (copy, nonatomic) NSString *distributorID;
@property (retain, nonatomic) STFamilyOrganizationSettings *familyOrgSettings;
@property (nonatomic) unsigned long long ratingValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;

- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (void)didChangeValueForKey:(id)a0;

@end
