@interface QCNumericalFormatter : NSFormatter {
    BOOL _allowsFloats;
    double _min;
    double _max;
}

- (void)setMinimum:(double)a0;
- (double)maximum;
- (void)setMaximum:(double)a0;
- (id)init;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (double)minimum;
- (id)stringForObjectValue:(id)a0;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:(BOOL)a0;

@end
