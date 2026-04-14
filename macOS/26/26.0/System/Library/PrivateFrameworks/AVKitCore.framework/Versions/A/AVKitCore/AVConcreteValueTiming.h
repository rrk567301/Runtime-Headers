@interface AVConcreteValueTiming : AVValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (double)rate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)anchorTimeStamp;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (double)anchorValue;
- (struct { double x0; double x1; })_timing;

@end
