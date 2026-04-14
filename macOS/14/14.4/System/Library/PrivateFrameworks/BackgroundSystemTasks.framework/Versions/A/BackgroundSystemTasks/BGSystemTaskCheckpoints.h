@interface BGSystemTaskCheckpoints : NSObject

+ (id)logger;
+ (BOOL)reportCustomCheckpoint:(unsigned long long)a0 forTask:(id)a1 error:(id *)a2;
+ (BOOL)reportFeatureCheckpoint:(unsigned long long)a0 forFeature:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)reportTaskCheckpoint:(unsigned long long)a0 forTask:(id)a1 value:(id)a2 error:(id *)a3;

@end
