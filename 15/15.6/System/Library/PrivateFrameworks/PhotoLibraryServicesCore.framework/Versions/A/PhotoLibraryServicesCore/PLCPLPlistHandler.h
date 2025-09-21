@interface PLCPLPlistHandler : NSObject

+ (void)initialize;
+ (char)CPLPlistFileExistsWithPathManager:(id)a0;
+ (void)deleteCPLPlistWithPathManager:(id)a0;
+ (id)readCPLPlistObjectWithKey:(id)a0 pathManager:(id)a1;
+ (void)saveCPLPlistObject:(id)a0 forKey:(id)a1 pathManager:(id)a2;
+ (id)_cplPlistURLWithPathManager:(id)a0 verb:(id)a1;
+ (id)_readCPLPlistWithPathManager:(id)a0;

@end
