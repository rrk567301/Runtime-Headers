@interface QCNumericalFormatter : NSFormatter {
    char _allowsFloats;
    double _min;
    double _max;
}

- (id)init;
- (double)minimum;
- (double)maximum;
- (char)allowsFloats;
- (char)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void)setAllowsFloats:(char)a0;
- (void)setMaximum:(double)a0;
- (void)setMinimum:(double)a0;
- (id)stringForObjectValue:(id)a0;

@end
