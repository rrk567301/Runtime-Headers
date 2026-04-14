@class NSUUID, NSString, NSData, NSDate, NSNumber, NSSet;

@interface MapsSyncManagedVisitedLocation : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, retain) NSNumber *enclosingRegionMuid;
@property (nonatomic, retain) NSNumber *enclosingRegionProvider;
@property (nonatomic) BOOL hidden;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *latestVisitDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSString *mapItemAddress;
@property (nonatomic, copy) NSString *mapItemCategory;
@property (nonatomic, copy) NSString *mapItemCity;
@property (nonatomic, copy) NSString *mapItemIdentifier;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSString *mapItemName;
@property (nonatomic, copy) NSData *mapItemStorage;
@property (nonatomic) int mapItemTopLevelCategory;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, retain) NSSet *visits;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
