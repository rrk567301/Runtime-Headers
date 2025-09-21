@class NSUUID, NSDate;

@interface RTAuthorizedLocationZDRLocationsMO : NSManagedObject

@property (copy, nonatomic) NSUUID *zdrLocationUUID;
@property (copy, nonatomic) NSDate *zdrLocationDbEntryTimeCfatSec;
@property unsigned long long zdrLocationType;
@property double zdrLocationLatitudeDeg;
@property double zdrLocationLongitudeDeg;
@property (copy, nonatomic) NSDate *zdrLocationLastSeenTimeCfatSec;

+ (id)fetchRequest;
+ (id)managedObjectWithAuthorizedZDRLocation:(id)a0 inManagedObjectContext:(id)a1;

@end
