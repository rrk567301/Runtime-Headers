@interface PLCPLPlistHandler : NSObject

+ (void)initialize;
+ (id)_readCPLPlistWithPathManager:(id)a0;
+ (id)_cplPlistURLWithPathManager:(id)a0 verb:(id)a1;
+ (id)readCPLPlistObjectWithKey:(id)a0 pathManager:(id)a1;
+ (void)deleteCPLPlistWithPathManager:(id)a0;
+ (BOOL)CPLPlistFileExistsWithPathManager:(id)a0;
+ (void)saveCPLPlistObject:(id)a0 forKey:(id)a1 pathManager:(id)a2;

@end
