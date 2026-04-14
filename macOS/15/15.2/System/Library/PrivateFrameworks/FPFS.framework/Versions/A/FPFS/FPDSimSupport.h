@interface FPDSimSupport : NSObject <FPSimulatorSupport, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ simListener;
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ devicesURL;
    void /* unknown type, empty encoding */ materializationHandlers;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)sim_dirEntryHelper:(id)a0 completionHandler:(id /* block */)a1;
- (void)sim_makeDatalessFileAt:(id)a0 type:(unsigned int)a1 documentSize:(long long)a2 entryCount:(long long)a3 completionHandler:(id /* block */)a4;
- (void)sim_markPurgeable:(id)a0 flags:(unsigned long long)a1 syncRoot:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)sim_materializeFile:(id)a0 from:(id)a1 size:(long long)a2 completionHandler:(id /* block */)a3;
- (void)sim_pkgLookup:(id)a0 name:(id)a1 acceptDemotedPkg:(BOOL)a2 detection:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)sim_registerMaterializationHandler:(id)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)sim_setOrClearXattr:(id)a0 data:(id)a1 onFile:(id)a2 completionHandler:(id /* block */)a3;
- (void)sim_setSyncRoot:(id)a0 flags:(int)a1 completionHandler:(id /* block */)a2;
- (void)sim_unregisterMaterializationHandlerForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)sim_unsetDatalessBitAt:(id)a0 completionHandler:(id /* block */)a1;

@end
