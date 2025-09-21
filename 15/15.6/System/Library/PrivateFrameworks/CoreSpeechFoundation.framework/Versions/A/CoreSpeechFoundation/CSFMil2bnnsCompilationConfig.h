@class NSString;

@interface CSFMil2bnnsCompilationConfig : NSObject

@property (readonly, nonatomic) NSString *funcName;
@property (readonly, nonatomic) char singleThread;
@property (readonly, nonatomic) char debugInfo;
@property (readonly, nonatomic) unsigned long long predefinedOptimizations;
@property (readonly, nonatomic) char optimizeForSize;

- (void).cxx_destruct;
- (id)initWithConfigPath:(id)a0 errOut:(id *)a1;

@end
