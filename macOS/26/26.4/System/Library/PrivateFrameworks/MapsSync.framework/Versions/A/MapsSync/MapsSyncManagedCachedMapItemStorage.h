@class NSString, NSUUID, NSData, NSDate, NSNumber;

@interface MapsSyncManagedCachedMapItemStorage : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemStorage;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, retain) NSNumber *resultsProvider;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
