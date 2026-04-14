@interface CSMil2BnnsUtils : NSObject

+ (id)compileModelWithMilFile:(id)a0 bnnsIrCachePath:(id)a1;
+ (void *)mmapModelWithConfig:(id)a0 mappedSizeOut:(id *)a1;
+ (id)readBnnsIrFromCacheMapWithMilFile:(id)a0;
+ (void)removeConfigFromQuasarComputeEngineCacheWithMilBnnsPath:(id)a0 bnnsIrPath:(id)a1;

@end
