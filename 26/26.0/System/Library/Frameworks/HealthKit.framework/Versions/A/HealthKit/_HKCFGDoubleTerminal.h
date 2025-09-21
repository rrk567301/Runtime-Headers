@interface _HKCFGDoubleTerminal : _HKCFGTerminal

@property (copy, nonatomic) id /* block */ condition;

- (id)_label;
- (id)characterSet;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (unsigned long long)_minimumLength;
- (void).cxx_destruct;

@end
