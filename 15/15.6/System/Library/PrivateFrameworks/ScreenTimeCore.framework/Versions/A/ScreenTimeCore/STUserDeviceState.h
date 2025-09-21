@class STCoreUser, NSString, NSSet, NSData, STCoreDevice, NSDate;

@interface STUserDeviceState : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) char screenTimeEnabled;
@property (nonatomic) char cloudSyncEnabled;
@property (nonatomic) char managementEnabled;
@property (copy, nonatomic) NSString *passcodeOwner;
@property (copy, nonatomic) NSData *capabilitiesPlist;
@property (copy, nonatomic) NSData *deviceInfoPlist;
@property (retain, nonatomic) STCoreUser *localUser;
@property (retain, nonatomic) STCoreDevice *localDevice;
@property (retain, nonatomic) STCoreUser *user;
@property (retain, nonatomic) STCoreDevice *device;
@property (retain, nonatomic) NSSet *installedApps;
@property (nonatomic) long long msInterventionPolicy;
@property (copy, nonatomic) NSDate *lastFamilyCheckinDate;
@property (copy, nonatomic) NSString *coreDuetIdentifier;
@property char isLegacyUsageDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)_getCoreDuetIdentifier;
+ (id)fetchLocalUserDeviceStateInContext:(id)a0 error:(id *)a1;
+ (id)fetchOrCreateLocalUserDeviceStateInContext:(id)a0 error:(id *)a1;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchRequestMatchingLocalUserDeviceState;
+ (char)isUnitTestRunning;

- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (char)validateForDelete:(id *)a0;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (char)_validateCoreDuetIdentifier:(id)a0;
- (char)_validateLocalUserDeviceState:(id)a0;
- (char)_validateNumberOfLocalUserDeviceStates:(id)a0;
- (id)computeUniqueIdentifier;
- (char)updateWithDictionaryRepresentation:(id)a0;

@end
