@class NSDate;

@interface HMDHomeActivityComingHomeAggregatorState : HMFObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *transitionalStateEndDate;

+ (id)comingHomeWithEstimatedEndDate:(id)a0;
+ (id)notComingHome;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 transitionalStateEndDate:(id)a1;

@end
