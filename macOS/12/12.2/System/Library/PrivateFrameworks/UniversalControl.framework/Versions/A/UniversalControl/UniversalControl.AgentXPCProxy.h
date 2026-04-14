@interface UniversalControl.AgentXPCProxy : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ devices;
    void /* unknown type, empty encoding */ connectedDevices;
    void /* unknown type, empty encoding */ localDevice;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ localSeed;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ notificationName;
    void /* unknown type, empty encoding */ notifyToken;
    void /* unknown type, empty encoding */ notifySeed;
}

- (id)init;
- (void).cxx_destruct;

@end
