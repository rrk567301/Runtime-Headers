@interface SignpostFrameOverrunInterval : SignpostAnimationSubInterval

@property (nonatomic) unsigned long long overrunType;
@property (nonatomic) unsigned long long overrunClass;

- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2 class:(unsigned long long)a3;

@end
