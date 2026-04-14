@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSString *string;
@property (nonatomic) BOOL caseSensitive;

- (void).cxx_destruct;
- (id)_label;
- (unsigned long long)_minimumLength;
- (id)characterSet;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;

@end
