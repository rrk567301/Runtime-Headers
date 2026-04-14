@interface QLMediaUIConcreteValueTiming : QLMediaUIValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (double)rate;
- (struct { double x0; double x1; })_timing;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (double)anchorTimeStamp;
- (double)anchorValue;

@end
