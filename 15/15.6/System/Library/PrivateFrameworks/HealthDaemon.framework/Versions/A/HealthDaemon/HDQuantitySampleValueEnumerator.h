@interface HDQuantitySampleValueEnumerator : NSObject

+ (char)orderedQuantityValuesBySeriesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (char)orderedQuantityValuesBySeriesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (char)orderedQuantityValuesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (char)orderedQuantityValuesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;

@end
