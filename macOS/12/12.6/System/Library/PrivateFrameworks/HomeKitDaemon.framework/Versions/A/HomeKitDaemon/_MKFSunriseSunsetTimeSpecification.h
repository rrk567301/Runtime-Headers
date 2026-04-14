@class Protocol, NSString, NSUUID, NSDateComponents, NSDate, MKFSunriseSunsetTimeSpecificationDatabaseID;
@protocol MKFTimePeriodBulletinCondition;

@interface _MKFSunriseSunsetTimeSpecification : _MKFBulletinTimeSpecification <MKFSunriseSunsetTimeSpecification, MKFSunriseSunsetTimeSpecificationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) MKFSunriseSunsetTimeSpecificationDatabaseID *databaseID;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> endCondition;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> startCondition;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;

- (id)castIfSunriseSunsetTimeSpecification;

@end
