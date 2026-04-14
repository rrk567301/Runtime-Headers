@class NSUUID, MapsSyncManagedVisitedLocation, NSDate;

@interface MapsSyncManagedVisit : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) BOOL hidden;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) short visitClassification;
@property (nonatomic, retain) MapsSyncManagedVisitedLocation *location;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
