@interface TIAnalyticsUtil : NSObject

+ (char)isFloat:(id)a0;
+ (char)isInteger:(id)a0;
+ (char)isStylizedString:(id)a0 equalToString:(id)a1;
+ (id)roundCount:(id)a0 toSignificantDigits:(long long)a1;
+ (id)appCategoryForBundleID:(id)a0;
+ (id)bucketNumber:(id)a0 bucketThresholds:(id)a1 bucketValues:(id)a2;
+ (id)bucketPercentageWithNumber:(id)a0;
+ (id)bucketPercentageWithNumerator:(id)a0 andDenominator:(id)a1;
+ (id)bucketPercentageWithValue:(double)a0;
+ (id)bucketRatioWithNumber:(id)a0 bucketCount:(int)a1;
+ (id)bucketRatioWithNumerator:(id)a0 andDenominator:(id)a1 bucketCount:(int)a2;
+ (id)bucketRatioWithValue:(double)a0 bucketCount:(int)a1;
+ (int)computeCommonExtentForArrays:(id)a0;
+ (id)constrainInteger:(id)a0 toMinimum:(id)a1 andMaximum:(id)a2;
+ (id)createStringByReplacingStylizedQuotesToStraightQuotes:(id)a0;
+ (char)hasNonWhitespaceNonPunctuationText:(id)a0;
+ (id)indexesForValidRatiosInArray:(id)a0;
+ (char)isArray:(id)a0;
+ (char)isBoolean:(id)a0;
+ (char)isDictionary:(id)a0;
+ (char)isNumber:(id)a0;
+ (char)isReportableClientId:(id)a0;
+ (char)isString:(id)a0;
+ (id)roundNumber:(id)a0 toSignificantDigits:(id)a1;
+ (id)toFloat:(id)a0;
+ (id)toInteger:(id)a0;

@end
