@class NSArray, WiFiAwareSrvInfo, WiFiAwareRadioSchedule, NSString, WiFiP2PXPCConnection;
@protocol WiFiAwareStateMonitorXPCDelegate;

@interface WiFiAwareStateMonitor : NSObject <WiFiAwareStateMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    id<WiFiAwareStateMonitorXPCDelegate> _remoteProxy;
}

@property (retain, nonatomic) NSArray *lastStateChangedOptions;
@property (retain, nonatomic) NSArray *lastDataPathStateChangedOptions;
@property (retain, nonatomic) NSArray *lastRadioScheduleChangedOptions;
@property (retain, nonatomic) WiFiAwareRadioSchedule *lastRadioSchedule;
@property (retain, nonatomic) NSArray *lastSrvInfoChangedOptions;
@property (retain, nonatomic) WiFiAwareSrvInfo *lastSrvInfo;
@property (copy, nonatomic) id /* block */ stateUpdatedHandler;
@property (copy, nonatomic) id /* block */ dpStateUpdatedHandler;
@property (copy, nonatomic) id /* block */ availUpdatedHandler;
@property (copy, nonatomic) id /* block */ srvInfoUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedObject;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)init;
- (void)endMonitoring;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginMonitoring;
- (void)beginAvailabilityMonitoring;
- (id)getFormattedSrvInfoDescription:(id)a0;
- (id)queryNANEnabled;
- (void)beginDataPathMonitoring;
- (void)beginSrvInfoMonitoring;
- (void)endAvailabilityMonitoring;
- (void)endDataPathMonitoring;
- (void)endSrvInfoMonitoring;
- (id)getFormattedDataPathStateDescription:(id)a0;
- (id)getFormattedRadioScheduleDescription:(id)a0;
- (id)getFormattedStateDescription:(id)a0;
- (id)queryNANAvail;
- (id)queryNANDataPathState;
- (id)queryNANSrv;
- (id)queryNANState;
- (void)updatedNANAvailability:(id)a0;
- (void)updatedNANAvailabilityWithChangedOptions:(id)a0 changedOptions:(id)a1;
- (void)updatedNANAvailabilityWithChangedOptions:(id)a0 changedOptions:(id)a1 forceAllChangedOptions:(BOOL)a2;
- (void)updatedNANDpState:(id)a0;
- (void)updatedNANDpStateWithChangedOptions:(id)a0 changedOptions:(id)a1;
- (void)updatedNANDpStateWithChangedOptions:(id)a0 changedOptions:(id)a1 forceAllChangedOptions:(BOOL)a2;
- (void)updatedNANSrvInfo:(id)a0;
- (void)updatedNANSrvInfoWithChangedOptions:(id)a0 changedOptions:(id)a1;
- (void)updatedNANSrvInfoWithChangedOptions:(id)a0 changedOptions:(id)a1 forceAllChangedOptions:(BOOL)a2;
- (void)updatedNANState:(id)a0;
- (void)updatedNANStateWithChangedOptions:(id)a0 changedOptions:(id)a1;
- (void)updatedNANStateWithChangedOptions:(id)a0 changedOptions:(id)a1 forceAllChangedOptions:(BOOL)a2;

@end
