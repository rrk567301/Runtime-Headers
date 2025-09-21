@interface LibSCLM : NSObject

+ (id)ExecuteScript:(id)a0 seHandle:(id)a1 logSink:(id)a2;
+ (id)ExecuteScriptByName:(id)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformOnlyScriptInSEFW:(id)a0 seHandle:(id)a1 logSink:(id)a2;
+ (id)PerformScript:(unsigned long long)a0 seHandle:(id)a1 logSink:(id)a2;
+ (BOOL)InspectSEFW:(id)a0 closure:(id /* block */)a1 error:(id *)a2;
+ (id)PerformOnlyScriptInSEFWWithResult:(id)a0 seHandle:(id)a1 logSink:(id)a2;
+ (id)PerformScript:(unsigned long long)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformScriptWithName:(id)a0 seHandle:(id)a1 logSink:(id)a2;
+ (id)PerformScriptWithName:(id)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformScriptWithNameWithResult:(id)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformScriptWithResult:(unsigned long long)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)convertScriptResult:(void *)a0;

@end
