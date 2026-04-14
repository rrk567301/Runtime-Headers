@interface AVConcreteValueTiming : AVValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (double)rate;
- (double)anchorTimeStamp;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { double x0; double x1; })_timing;
- (double)anchorValue;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;

@end
