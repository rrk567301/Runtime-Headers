@class NSSet, NSString, STUserDeviceState, NSDate;
@protocol STSerializableManagedObject;

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>

@property (nonatomic, readonly) char hasLegacyUsageData;
@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) short platform;
@property (nonatomic) char supportsPasscodeActivity;
@property (copy, nonatomic) NSDate *lastPasscodeUseDate;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (retain, nonatomic) NSSet *userDeviceStates;
@property (retain, nonatomic) NSSet *usages;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)fetchDeviceWithCoreDuetIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchDeviceWithIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchOrCreateLocalDeviceInContext:(id)a0 error:(id *)a1;
+ (id)fetchRequestForDevicesMissingUsage;
+ (id)fetchRequestForLocalDevices;
+ (id)fetchRequestForNonLocalDevices;

- (char)validateForDelete:(id *)a0;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (char)_validateLocalDevice:(id)a0;
- (char)_validateNumberOfLocalDevices:(id)a0;
- (char)_validateRemoteDevice:(id)a0;
- (char)_validateUniqueIdentifier:(id)a0;
- (char)_validateUserDeviceStates:(id)a0;

@end
