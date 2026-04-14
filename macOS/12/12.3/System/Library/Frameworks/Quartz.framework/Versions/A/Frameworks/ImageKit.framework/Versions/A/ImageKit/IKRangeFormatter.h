@interface IKRangeFormatter : NSNumberFormatter

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)editingStringForObjectValue:(id)a0;
- (BOOL)getObjectValue2:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;

@end
