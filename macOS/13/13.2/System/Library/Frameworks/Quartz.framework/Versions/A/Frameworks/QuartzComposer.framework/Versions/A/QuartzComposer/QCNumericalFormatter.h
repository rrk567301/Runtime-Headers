@interface QCNumericalFormatter : NSFormatter {
    BOOL _allowsFloats;
    double _min;
    double _max;
}

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:(BOOL)a0;
- (double)minimum;
- (void)setMinimum:(double)a0;
- (double)maximum;
- (void)setMaximum:(double)a0;

@end
