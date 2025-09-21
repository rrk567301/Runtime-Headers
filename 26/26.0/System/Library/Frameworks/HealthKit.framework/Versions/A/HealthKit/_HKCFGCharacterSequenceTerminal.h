@class NSCharacterSet;

@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (id)_label;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (unsigned long long)_minimumLength;
- (void).cxx_destruct;

@end
