@class NSUUID, NSDate;

@interface MapsSyncManagedServerEvaluationStatus : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic) char arpStatus;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic) char rapStatus;
@property (nonatomic) char reliabilityStatus;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
