@class NSDate;

@interface HMDHomeActivityComingHomeAggregatorState : HMFObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *transitionalStateEndDate;

+ (id)comingHomeWithEstimatedEndDate:(id)a0;
+ (id)notComingHome;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 transitionalStateEndDate:(id)a1;

@end
