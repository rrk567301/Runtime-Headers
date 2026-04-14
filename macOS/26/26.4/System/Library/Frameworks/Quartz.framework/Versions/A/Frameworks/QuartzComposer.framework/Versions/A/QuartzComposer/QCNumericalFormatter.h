@interface QCNumericalFormatter : NSFormatter {
    BOOL _allowsFloats;
    double _min;
    double _max;
}

- (id)stringForObjectValue:(id)a0;
- (void)setMinimum:(double)a0;
- (double)minimum;
- (id)init;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void)setMaximum:(double)a0;
- (double)maximum;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:(BOOL)a0;

@end
