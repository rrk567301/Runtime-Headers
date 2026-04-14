@class NSDate;

@interface HMDHomeActivityHomeAwayAggregatorState : HMFObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *awayChangedTimestamp;

- (id)attributeDescriptions;
- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 awayChangedTimestamp:(id)a1;

@end
