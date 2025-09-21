@interface WBSCreditCardSecurityCodeFormatter : NSFormatter

+ (id)_normalizedSecurityCode:(id)a0;

- (char)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;

@end
