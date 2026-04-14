@class NSString, WiFiP2PXPCConnection, NSMutableArray;

@interface WiFiP2PAWDLStateMonitor : NSObject <WiFiP2PAWDLStateMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    NSMutableArray *_interestedUniqueIdentifiers;
}

@property (copy, nonatomic) id /* block */ stateUpdatedHandler;
@property (copy, nonatomic) id /* block */ statisticsUpdatedHandler;
@property (copy, nonatomic) id /* block */ lowLatencyStatisticsUpdatedHandler;
@property (copy, nonatomic) id /* block */ realtimeModeUpdatedHandler;
@property (copy, nonatomic) id /* block */ threadCoexistenceEventHandler;
@property (copy, nonatomic) id /* block */ softAPChannelChangedEventHandler;
@property (copy, nonatomic) id /* block */ channelSequenceUpdatedEventHandler;
@property (copy, nonatomic) id /* block */ serviceAvailabilityUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatedStatistics;
- (void)endMonitoring;
- (void)updatedAWDLState:(id)a0;
- (id)lowLatencyStatisticsDifferenceBetweenPrevious:(id)a0 current:(id)a1;
- (void)updatedLowLatencyStatistics;
- (id)copyLowLatencyStatistics;
- (id)copySidecarStatistics;
- (id)queryPeerDatabase;
- (void)channelSequenceChangedEvent:(id)a0;
- (id)exportedObject;
- (void).cxx_destruct;
- (void)threadCoexistenceEvent:(id)a0;
- (void)beginMonitoring;
- (id)copyActiveServiceUniqueIdentifiers;
- (void)registerAvailabilityUpdatesForService:(id)a0;
- (BOOL)fetchAWDLActiveServices:(id *)a0 withActivePorts:(id *)a1 error:(id *)a2;
- (id)copyStatistics;
- (void)availabilityUpdatedForService:(id)a0 error:(id)a1;
- (id)exportedInterface;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)updateLTERestrictedChannels:(id)a0 error:(id *)a1;
- (void)softAPChannelChangedEvent:(BOOL)a0 channelNumber:(unsigned short)a1;
- (int)queryAverageRSSIForPeer:(id)a0;
- (void)updatedRealtimeMode:(BOOL)a0;

@end
