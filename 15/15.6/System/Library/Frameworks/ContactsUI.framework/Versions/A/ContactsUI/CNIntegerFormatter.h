@interface CNIntegerFormatter : NSNumberFormatter

+ (id)portNumberFormatter;

- (char)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (char)_isPartialStringValid:(id)a0;

@end
