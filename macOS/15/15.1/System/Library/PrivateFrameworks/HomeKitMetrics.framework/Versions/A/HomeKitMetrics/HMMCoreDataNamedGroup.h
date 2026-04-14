@class NSString, NSSet;
@protocol HMMGroupSpecifier;

@interface HMMCoreDataNamedGroup : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *counters;
@property (retain, nonatomic) NSSet *valueStatistics;
@property (readonly, nonatomic) id<HMMGroupSpecifier> groupSpecifier;

+ (id)fetchRequest;

@end
