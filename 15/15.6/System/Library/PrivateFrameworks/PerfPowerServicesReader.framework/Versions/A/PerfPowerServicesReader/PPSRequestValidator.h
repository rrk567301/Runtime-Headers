@interface PPSRequestValidator : NSObject

+ (id)sharedInstance;
+ (char)_isMetricDefinedForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2 name:(id)a3;
+ (char)_validateFilepath:(id)a0 error:(id *)a1;
+ (char)_validatePredicateRequiredKey:(id)a0 value:(id)a1 error:(id *)a2;
+ (char)_validatePredicateValue:(id)a0 metricDefinition:(id)a1 error:(id *)a2;
+ (char)_validateRequestType:(long long)a0 error:(id *)a1;

- (char)validateDataRequest:(id)a0 filepath:(id)a1 withError:(id *)a2;

@end
