@interface HMDHomeActivityStateVacationTransitionLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long reason;

- (id)initWithReason:(unsigned long long)a0;

@end
