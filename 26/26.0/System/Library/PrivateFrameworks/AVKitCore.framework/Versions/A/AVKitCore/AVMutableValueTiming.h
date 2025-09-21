@interface AVMutableValueTiming : AVValueTiming

@property double anchorValue;
@property double anchorTimeStamp;
@property double rate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setRate:(double)a0;
- (Class)classForCoder;
- (void)setValueTiming:(id)a0;
- (void)setAnchorValue:(double)a0;
- (void)setAnchorTimeStamp:(double)a0;

@end
