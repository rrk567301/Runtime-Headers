@class NSDate;

@interface WADeviceAnalyticsDatedRecord : NSManagedObject

@property (copy, nonatomic) NSDate *date;

+ (id)fetchRequest;
+ (id)datedProperty;

- (id)description;

@end
