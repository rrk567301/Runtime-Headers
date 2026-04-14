@class Protocol, MKFBulletinConditionDatabaseID, _MKFBulletinRegistration, NSUUID, NSDate, NSString;
@protocol MKFBulletinRegistration;

@interface _MKFBulletinCondition : _MKFModel <MKFBulletinCondition, MKFBulletinConditionPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFBulletinRegistration *bulletinRegistration;
@property (readonly, retain, nonatomic) id<MKFBulletinRegistration> bulletinRegistration;
@property (readonly, copy, nonatomic) MKFBulletinConditionDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfBulletinCondition;
- (id)materializeOrCreateBulletinRegistrationRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateBulletinRegistrationRelationOfTypeBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinRegistrationRelationOfTypeBulletinRegistrationWithModelID:(id)a0;
- (id)materializeOrCreateBulletinRegistrationRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinRegistrationRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)a0;
- (id)materializeOrCreateBulletinRegistrationRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinRegistrationRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)a0;
- (id)materializeOrCreateBulletinRegistrationRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinRegistrationRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)a0;
- (id)materializeOrCreateBulletinRegistrationRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinRegistrationRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)a0;
- (void)addBulletinRegistrationObject:(id)a0;
- (void)removeBulletinRegistrationObject:(id)a0;

@end
