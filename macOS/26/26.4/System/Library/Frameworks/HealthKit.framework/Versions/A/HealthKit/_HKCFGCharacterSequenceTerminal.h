@class NSCharacterSet;

@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (void).cxx_destruct;
- (unsigned long long)_minimumLength;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)_label;

@end
