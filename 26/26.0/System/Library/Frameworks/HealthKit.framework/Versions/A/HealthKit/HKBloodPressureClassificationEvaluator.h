@interface HKBloodPressureClassificationEvaluator : NSObject

+ (id)categoriesForClassificationGuidelines:(long long)a0 error:(id *)a1;
+ (id)categoryDataForCategory:(id)a0 error:(id *)a1;
+ (id)categoryForClassificationGuidelines:(long long)a0 systolic:(id)a1 diastolic:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
