@interface IntelligentRoutingDaemon.HomeKitManager : NSObject <HMHomeDelegate, HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ roomClassificationService;
    void /* unknown type, empty encoding */ databaseService;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ rooms;
    void /* unknown type, empty encoding */ hasCompletedFirstRefresh;
    void /* unknown type, empty encoding */ queue;
}

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)home:(id)a0 didUpdateRoom:(id)a1 forAccessory:(id)a2;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;

@end
