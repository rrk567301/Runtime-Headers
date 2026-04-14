@class NSString, NSSet;
@protocol HMMGroupSpecifier;

@interface HMMCoreDataNamedGroup : NSManagedObject

@property (readonly, nonatomic) id<HMMGroupSpecifier> groupSpecifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *counters;
@property (retain, nonatomic) NSSet *valueStatistics;

+ (id)fetchRequest;

@end
