@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSString *string;
@property (nonatomic) char caseSensitive;

- (void).cxx_destruct;
- (id)_label;
- (id)characterSet;
- (unsigned long long)_minimumLength;
- (char)_scanValue:(id *)a0 withScanner:(id)a1;

@end
