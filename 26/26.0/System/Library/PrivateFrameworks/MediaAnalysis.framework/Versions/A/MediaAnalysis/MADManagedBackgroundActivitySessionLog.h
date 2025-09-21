@class NSString, MADManagedBackgroundActivitySchedule;

@interface MADManagedBackgroundActivitySessionLog : NSManagedObject

@property (nonatomic) int taskID;
@property (copy, nonatomic) NSString *payload;
@property (retain, nonatomic) MADManagedBackgroundActivitySchedule *scheduling;

+ (id)fetchRequest;
+ (id)payloadColumnName;
+ (id)schedulingColumnName;
+ (id)taskIDColumnName;

@end
