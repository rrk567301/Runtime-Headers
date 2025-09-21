@interface TSUNumberParser : NSObject

+ (char)numberValueFromString:(id)a0 locale:(id)a1 outDoubleValue:(double *)a2;
+ (char)numberValueFromString:(id)a0 locale:(id)a1 outDecimalValue:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2;
+ (char)numberValueFromString:(id)a0 locale:(id)a1 outDecimalValue:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 outValueType:(int *)a3 outCurrencyCode:(id *)a4;
+ (char)numberValueFromString:(id)a0 locale:(id)a1 outDoubleValue:(double *)a2 outValueType:(int *)a3;
+ (char)numberValueFromString:(id)a0 locale:(id)a1 outDecimalValue:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 outValueType:(int *)a3;
+ (char)numberValueFromString:(id)a0 locale:(id)a1 outDoubleValue:(double *)a2 outValueType:(int *)a3 outCurrencyCode:(id *)a4;

@end
