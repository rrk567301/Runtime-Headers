@interface HMDHomeActivityVacationAggregatorState : HMFObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long changedReason;

- (id)attributeDescriptions;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 changedReason:(unsigned long long)a1;

@end
