@interface MinMaxIntFormatter : APFormatter {
    int _minimum;
    int _maximum;
}

+ (id)formatterForMin:(int)a0 max:(int)a1;

- (int)maximum;
- (int)minimum;
- (void)setMinimum:(int)a0;
- (id)initWithMin:(int)a0 max:(int)a1;
- (void)setMaximum:(int)a0;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;

@end
