@class NSSet, NSString, STUserDeviceState, NSDate;
@protocol STSerializableManagedObject;

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>

@property (nonatomic, readonly) BOOL hasLegacyUsageData;
@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) short platform;
@property (nonatomic) BOOL supportsPasscodeActivity;
@property (copy, nonatomic) NSDate *lastPasscodeUseDate;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (retain, nonatomic) NSSet *userDeviceStates;
@property (retain, nonatomic) NSSet *usages;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestForLocalDevices;
+ (id)fetchOrCreateLocalDeviceInContext:(id)a0 error:(id *)a1;
+ (id)fetchRequestForDevicesMissingUsage;
+ (id)fetchDeviceWithIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchRequest;
+ (id)fetchRequestForNonLocalDevices;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchDeviceWithCoreDuetIdentifier:(id)a0 inContext:(id)a1 error:(id *)a2;

- (BOOL)_validateUserDeviceStates:(id)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)_validateUniqueIdentifier:(id)a0;
- (BOOL)_validateNumberOfLocalDevices:(id)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)_validateLocalDevice:(id)a0;
- (BOOL)_validateRemoteDevice:(id)a0;

@end
