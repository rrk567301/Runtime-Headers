@interface SiriVirtualDeviceResolution.DeviceResolutionService : NSObject <HMHomeManagerDelegatePrivate> {
    void /* unknown type, empty encoding */ homeManagerReadyGroup;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ homeManager;
    void /* unknown type, empty encoding */ initialLoadDone;
    void /* unknown type, empty encoding */ endpointUUID;
    void /* unknown type, empty encoding */ waitingOnHomeManagerDataSync;
    void /* unknown type, empty encoding */ _xpcConnection;
}

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)init;
- (void)homeManagerDidUpdateDataSyncInProgress:(id)a0;

@end
