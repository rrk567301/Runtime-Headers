@class Protocol, NSString, _MKFAppleMediaAccessory, NSUUID, MKFAppleMediaAccessoryResidentDatabaseID, NSNumber, NSDate;
@protocol MKFHome, MKFDevice, MKFAppleMediaAccessory;

@interface _MKFAppleMediaAccessoryResident : _MKFResident <MKFAppleMediaAccessoryResident, MKFAppleMediaAccessoryResidentPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFAppleMediaAccessory *accessory;
@property (retain, nonatomic) id<MKFAppleMediaAccessory> accessory;
@property (readonly, copy, nonatomic) MKFAppleMediaAccessoryResidentDatabaseID *databaseID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *reachable;
@property (retain, nonatomic) id<MKFDevice> device;
@property (retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;

- (id)castIfAppleMediaAccessoryResident;

@end
