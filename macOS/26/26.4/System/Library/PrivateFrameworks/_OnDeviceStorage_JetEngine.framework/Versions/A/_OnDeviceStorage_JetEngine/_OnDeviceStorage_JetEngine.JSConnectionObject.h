@interface _OnDeviceStorage_JetEngine.JSConnectionObject : NSObject <_TtP26_OnDeviceStorage_JetEngineP33_1B676B797AB8D083ED59085B76D794B618JSConnectionExport_> {
    void /* unknown type, empty encoding */ connection;
}

- (id)select:(id)a0;
- (id)update:(id)a0;
- (id)open;
- (void).cxx_destruct;
- (id)init;
- (id)close;
- (id)delete:(id)a0;
- (id)insert:(id)a0;
- (id)exists:(id)a0;
- (id)scalar:(id)a0;
- (id)upsert:(id)a0;
- (id)pluck:(id)a0;
- (id)selectPaginated:(id)a0 :(id)a1;
- (id)tableExists:(id)a0 :(id)a1;
- (id)triggerDataDeletion:(id)a0;

@end
