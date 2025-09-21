@interface WBSCreditCardFormatter : NSFormatter

@property (nonatomic) char showLastFourDigits;
@property (nonatomic) char showCreditCardNumber;
@property (nonatomic) char allowsUnknownCardTypes;
@property (nonatomic) char isVirtualCard;

+ (id)_formattedStringForNormalizedNumber:(id)a0 showCreditCardNumber:(char)a1 showLastFourDigits:(char)a2 isVirtualCard:(char)a3;
+ (id)formattedStringForNormalizedNumber:(id)a0 showCreditCardNumber:(char)a1;

- (char)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringForObjectValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_normalizedSelectionRangeForFormattedCreditCardNumber:(id)a0 withOriginalSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionRangeInFormattedCreditCardNumber:(id)a0 forNormalizedSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inNormalizedCreditCardNumber:(id)a2;

@end
