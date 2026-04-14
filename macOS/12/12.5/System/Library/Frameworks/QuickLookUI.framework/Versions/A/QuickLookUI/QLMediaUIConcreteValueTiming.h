@interface QLMediaUIConcreteValueTiming : QLMediaUIValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)rate;
- (struct { double x0; double x1; })_timing;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (double)anchorValue;
- (double)anchorTimeStamp;

@end
