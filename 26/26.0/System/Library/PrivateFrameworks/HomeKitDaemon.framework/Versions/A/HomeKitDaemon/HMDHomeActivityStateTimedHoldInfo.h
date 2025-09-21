@class NSDate;

@interface HMDHomeActivityStateTimedHoldInfo : HMDHomeActivityStateHoldInfo

@property (readonly, nonatomic) NSDate *endDate;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isActiveAtDate:(id)a0;
- (id)initWithHomeActivityState:(unsigned long long)a0 activationDate:(id)a1 duration:(double)a2;
- (id)initWithHomeActivityState:(unsigned long long)a0 activationDate:(id)a1 endDate:(id)a2;

@end
