@interface CSMil2BnnsUtils : NSObject

+ (void)_changePermissionOfBnnsIr:(id)a0;
+ (void)_compileWithExceptionHandlingUsingModelFilePath:(id)a0 bnnsIrPath:(id)a1 milConfigPath:(id)a2 compilationFramework:(long long)a3 error:(id *)a4;
+ (BOOL)_isBnnsIrReadable:(id)a0;
+ (id)compileModelWithMilFile:(id)a0 bnnsIrCachePath:(id)a1 compilationFramework:(long long)a2;
+ (void *)mmapModelWithConfig:(id)a0 mappedSizeOut:(id *)a1 modelType:(long long)a2;
+ (id)readBnnsIrFromCacheMapWithMilFile:(id)a0;
+ (void)removeConfigFromQuasarComputeEngineCacheWithMilBnnsPath:(id)a0 bnnsIrPath:(id)a1;

@end
