@interface HDQuantitySampleValueEnumerator : NSObject

+ (BOOL)orderedQuantityValuesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)quantityValuesWithSourceForType:(id)a0 from:(id)a1 to:(id)a2 dataInterval:(id)a3 table:(id)a4 transaction:(id)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (BOOL)simplerOrderedQuantityValuesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)quantityValuesForType:(id)a0 from:(id)a1 to:(id)a2 transaction:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (BOOL)orderedQuantityValuesBySeriesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)orderedQuantityValuesBySeriesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)orderedQuantityValuesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;

@end
