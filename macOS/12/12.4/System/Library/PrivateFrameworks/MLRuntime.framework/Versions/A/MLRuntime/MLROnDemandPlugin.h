@interface MLROnDemandPlugin : NSObject

+ (void)initialize;
+ (id)_locateWithExtensionID:(id)a0;
+ (id)_createXPCConnection:(id)a0 error:(id *)a1;
+ (void)_performTask:(id)a0 forPluginID:(id)a1 isSynchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (void)performTask:(id)a0 forPluginID:(id)a1 completionHandler:(id /* block */)a2;
+ (id)synchronouslyPerformTask:(id)a0 forPluginID:(id)a1 error:(id *)a2;
+ (id)onDemandPluginIDs;

@end
