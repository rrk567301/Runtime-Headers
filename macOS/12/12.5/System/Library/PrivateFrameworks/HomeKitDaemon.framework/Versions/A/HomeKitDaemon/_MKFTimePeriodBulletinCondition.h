@class Protocol, NSUUID, NSString, MKFTimePeriodBulletinConditionDatabaseID, _MKFBulletinTimeSpecification, NSDate;
@protocol MKFBulletinTimeSpecification, MKFBulletinRegistration;

@interface _MKFTimePeriodBulletinCondition : _MKFBulletinCondition <MKFTimePeriodBulletinCondition, MKFTimePeriodBulletinConditionPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFBulletinTimeSpecification *endElement;
@property (retain, nonatomic) _MKFBulletinTimeSpecification *startElement;
@property (retain, nonatomic) id<MKFBulletinTimeSpecification> endElement;
@property (retain, nonatomic) id<MKFBulletinTimeSpecification> startElement;
@property (readonly, copy, nonatomic) MKFTimePeriodBulletinConditionDatabaseID *databaseID;
@property (readonly, retain, nonatomic) id<MKFBulletinRegistration> bulletinRegistration;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfTimePeriodBulletinCondition;
- (id)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEndElementRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0;
- (id)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0;
- (void)addEndElementObject:(id)a0;
- (void)removeEndElementObject:(id)a0;
- (id)materializeOrCreateStartElementRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0;
- (id)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0;
- (void)addStartElementObject:(id)a0;
- (void)removeStartElementObject:(id)a0;

@end
