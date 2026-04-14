@class Protocol, _MKFCharacteristic, NSArray, NSUUID, NSDate, MKFCharacteristicBulletinRegistrationDatabaseID, NSString;
@protocol MKFCharacteristic, MKFDevice;

@interface _MKFCharacteristicBulletinRegistration : _MKFBulletinRegistration <MKFCharacteristicBulletinRegistration, MKFCharacteristicBulletinRegistrationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFCharacteristic *characteristic;
@property (retain, nonatomic) id<MKFCharacteristic> characteristic;
@property (readonly, copy, nonatomic) MKFCharacteristicBulletinRegistrationDatabaseID *databaseID;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, retain, nonatomic) id<MKFDevice> device;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfCharacteristicBulletinRegistration;

@end
