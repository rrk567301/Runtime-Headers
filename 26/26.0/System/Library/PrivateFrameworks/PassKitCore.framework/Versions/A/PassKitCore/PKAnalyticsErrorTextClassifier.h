@interface PKAnalyticsErrorTextClassifier : NSObject

+ (id)analyticsValueForResult:(long long)a0;
+ (long long)classifyErrorText:(id)a0;
+ (BOOL)containsAnyTerm:(id)a0 inText:(id)a1;

@end
