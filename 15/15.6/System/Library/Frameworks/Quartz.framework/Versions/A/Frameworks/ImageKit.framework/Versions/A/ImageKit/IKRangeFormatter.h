@interface IKRangeFormatter : NSNumberFormatter

- (id)editingStringForObjectValue:(id)a0;
- (char)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (char)getObjectValue2:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;

@end
