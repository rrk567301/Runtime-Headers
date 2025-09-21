@interface _GEONaturalLanguageNumberFormatter : NSNumberFormatter

- (char)_isHalfDecimal:(double)a0 outIsExact:(out char *)a1;
- (char)_isNumberNearNaturalNumber:(double)a0 outIsExact:(out char *)a1;
- (id)_string_nAndAHalfDistance:(id)a0 isApproximate:(char)a1;
- (id)_string_nDistance:(id)a0 isApproximate:(char)a1;
- (int)_tenthsDecimalPlace:(double)a0;
- (id)stringFromDistanceMeasurement:(id)a0 roundedDistanceMeasurement:(id)a1;

@end
