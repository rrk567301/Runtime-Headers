@interface _HKCFGDoubleTerminal : _HKCFGTerminal

@property (copy, nonatomic) id /* block */ condition;

- (unsigned long long)_minimumLength;
- (id)characterSet;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;
- (id)_label;

@end
