@class NSString, HMMCounterStatistics, NSDate, HMMCoreDataNamedGroup;

@interface HMMCoreDataGroupValueStatistics : NSManagedObject

@property (readonly, copy, nonatomic) HMMCounterStatistics *counterStatistics;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) long long max;
@property (nonatomic) long long min;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long sum;
@property (retain, nonatomic) HMMCoreDataNamedGroup *group;

+ (id)fetchRequest;

- (id)addValue:(long long)a0;

@end
