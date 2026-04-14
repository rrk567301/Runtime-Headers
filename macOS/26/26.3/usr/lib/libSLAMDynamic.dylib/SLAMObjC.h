@interface SLAMObjC : NSObject

+ (id)PerformScript:(unsigned long long)a0 seHandle:(id)a1 logSink:(id)a2;
+ (id)PerformScript:(unsigned long long)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformScriptWithName:(id)a0 seHandle:(id)a1 logSink:(id)a2;
+ (id)PerformScriptWithName:(id)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformScriptWithNameWithResult:(id)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformScriptWithResult:(unsigned long long)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)convertScriptResult:(void *)a0;
+ (id)PerformRecovery:(id)a0 logSink:(id)a1;
+ (id)PerformScriptWithNameWithResult:(id)a0 seHandle:(id)a1 logSink:(id)a2;
+ (id)PerformScriptWithResult:(unsigned long long)a0 seHandle:(id)a1 logSink:(id)a2;

@end
