@class NSDate;

@interface HMDHomeActivityHomeAwayAggregatorState : HMFObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *awayChangedTimestamp;

- (id)initWithType:(unsigned long long)a0;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 awayChangedTimestamp:(id)a1;

@end
