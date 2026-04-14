@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSString *string;
@property (nonatomic) BOOL caseSensitive;

- (id)characterSet;
- (void).cxx_destruct;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)_label;
- (unsigned long long)_minimumLength;

@end
