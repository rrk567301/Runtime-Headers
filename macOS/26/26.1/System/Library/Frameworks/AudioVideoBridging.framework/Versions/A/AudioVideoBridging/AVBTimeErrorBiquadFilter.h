@class NSArray;

@interface AVBTimeErrorBiquadFilter : AVBTimeErrorFilter {
    NSArray *_biquads;
}

- (void)resetFilter;
- (void).cxx_destruct;
- (double)filteredErrorForError:(double)a0;
- (id)initWithSegments:(struct { double x0; double x1; double x2; double x3; double x4; } *)a0 numberOfSegments:(unsigned int)a1;

@end
