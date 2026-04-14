@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSString *string;
@property (nonatomic) BOOL caseSensitive;

- (id)_label;
- (id)characterSet;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (unsigned long long)_minimumLength;
- (void).cxx_destruct;

@end
