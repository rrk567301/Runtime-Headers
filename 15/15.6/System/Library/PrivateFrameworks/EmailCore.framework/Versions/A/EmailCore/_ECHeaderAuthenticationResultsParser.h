@interface _ECHeaderAuthenticationResultsParser : NSObject

+ (id)_authenticationResultsForHeaderBodies:(id)a0;
+ (char)_propertiesWithScanner:(id)a0 intoArray:(id *)a1;
+ (char)_scanQuotedValueWithScanner:(id)a0 intoString:(id *)a1;
+ (char)_scanToCFWSOrEqualWithScanner:(id)a0 intoString:(id *)a1;
+ (char)_scanToCFWSOrPeriodOrSemicolonWithScanner:(id)a0 intoString:(id *)a1;
+ (char)_scanToCFWSOrSemicolonWithScanner:(id)a0 intoString:(id *)a1;
+ (char)_skipCFWSWithScanner:(id)a0;
+ (char)_statementWithScanner:(id)a0 intoStatement:(id *)a1;
+ (char)_statementsWithScanner:(id)a0 intoArray:(id *)a1;
+ (long long)_versionWithScanner:(id)a0;

@end
