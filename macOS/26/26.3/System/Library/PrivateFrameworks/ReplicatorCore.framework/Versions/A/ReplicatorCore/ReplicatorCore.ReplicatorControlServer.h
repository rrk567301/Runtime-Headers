@interface ReplicatorCore.ReplicatorControlServer : NSObject {
    void /* unknown type, empty encoding */ isXPCServerEnabled;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_clients;
    void /* unknown type, empty encoding */ lock_devices;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ replicator;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ notificationPoster;
    void /* unknown type, empty encoding */ clientSettingsStore;
    void /* unknown type, empty encoding */ idsService;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void).cxx_destruct;

@end
