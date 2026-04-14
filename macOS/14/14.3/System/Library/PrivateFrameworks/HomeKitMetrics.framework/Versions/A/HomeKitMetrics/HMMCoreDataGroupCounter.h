@class NSString, HMMCoreDataNamedGroup, NSDate;

@interface HMMCoreDataGroupCounter : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long value;
@property (retain, nonatomic) HMMCoreDataNamedGroup *group;

+ (id)fetchRequest;

@end
