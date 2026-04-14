@interface QCNumericalFormatter : NSFormatter {
    BOOL _allowsFloats;
    double _min;
    double _max;
}

- (double)minimum;
- (double)maximum;
- (void)setMinimum:(double)a0;
- (void)setMaximum:(double)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)init;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:(BOOL)a0;

@end
