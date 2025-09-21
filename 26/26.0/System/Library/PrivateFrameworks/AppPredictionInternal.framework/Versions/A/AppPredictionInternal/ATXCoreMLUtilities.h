@interface ATXCoreMLUtilities : NSObject

+ (id)loadCoreMLModelWithName:(id)a0;
+ (id)loadCoreMLModelWithName:(id)a0 withConfiguration:(id)a1 error:(id *)a2;
+ (double)scoreForModelOutputValue:(id)a0;
+ (double)scoreForModelOutputValue:(id)a0 outputIndexedSubscript:(long long)a1;

@end
