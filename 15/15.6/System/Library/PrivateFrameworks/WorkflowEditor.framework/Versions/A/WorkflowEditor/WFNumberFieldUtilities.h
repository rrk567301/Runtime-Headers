@interface WFNumberFieldUtilities : NSObject

+ (id)decimalSymbol;
+ (id)negateText:(id)a0;
+ (unsigned long long)numberOfOccurrencesOfString:(id)a0 inString:(id)a1;
+ (char)shouldChangeText:(id)a0 allowMinus:(char)a1;
+ (id)stringBySanitizingNumberString:(id)a0 allowDecimalNumbers:(char)a1;

@end
