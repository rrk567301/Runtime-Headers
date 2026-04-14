@class NSCharacterSet;

@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (void).cxx_destruct;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)_label;
- (unsigned long long)_minimumLength;

@end
