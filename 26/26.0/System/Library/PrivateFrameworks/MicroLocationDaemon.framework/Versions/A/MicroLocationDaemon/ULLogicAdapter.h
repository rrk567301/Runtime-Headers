@class NSString, ULEnvironment, _TtC19MicroLocationDaemon19ULPeripheralControl;

@interface ULLogicAdapter : NSObject <ULDiagnosticsProvider, ULLogicAdapterServiceHandlingInterface, ULLogicAdapterDiagnosticsHandlingInterface, ULLogicAdapterLegacyServiceHandlingInterface, ULRapportMonitorHandlingInterface, ULDataProtectionMonitorHandlingInterface> {
    struct unique_ptr<ULLogicAdapterImpl, std::default_delete<ULLogicAdapterImpl>> { struct ULLogicAdapterImpl *__ptr_; } logicAdapterImpl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _TtC19MicroLocationDaemon19ULPeripheralControl *peripheralControl;
@property (retain, nonatomic) ULEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newULServiceDescriptorFromInternalDescriptor:(const void *)a0;

- (void)_stop;
- (void)_start;
- (void)start;
- (void)dealloc;
- (BOOL)purgeMicroLocationData;
- (id)init;
- (id).cxx_construct;
- (id)diagnosticInfo;
- (void).cxx_destruct;
- (void)_stopMonitoringEvents;
- (BOOL)isDataAvailable;
- (id)getMicroLocationInternalVersion;
- (void)_handleULSleepWakeMonitorEvent:(id)a0;
- (void)_analyticsExecute:(id)a0;
- (void)_exportiCloudBackupExecute:(id)a0;
- (void)_handleULAirplaneModeMonitorEventAirplaneMode:(id)a0;
- (void)_handleULBatteryModeMonitorEventLowPowerMode:(id)a0;
- (void)_handleULBatteryModeMonitorEventUnlimitedPower:(id)a0;
- (void)_handleULBluetoothMonitorEventPowerOn:(id)a0;
- (void)_handleULBuddyMonitorEventBuddyComplete:(id)a0;
- (void)_handleULDataProtectionMonitorEventDataAvailable:(id)a0;
- (void)_handleULDisplayMonitorEventDisplayState:(id)a0;
- (void)_handleULDisplayMonitorEventDisplayState_OSX:(id)a0;
- (void)_handleULInternalNotifyMonitorEventLocalize:(id)a0;
- (void)_handleULInternalNotifyMonitorEventPurge:(id)a0;
- (void)_handleULInternalNotifyMonitorEventRecord:(id)a0;
- (void)_handleULInternalNotifyMonitorEventSettingsRefrsh:(id)a0;
- (void)_handleULPrivacyMonitorEventLocationServices:(id)a0;
- (void)_handleULRapportMonitorEventDeviceFound:(id)a0;
- (void)_learnExecute:(id)a0;
- (void)_maintenanceExecute:(id)a0;
- (void)_registerOnDatabaseValidNotification;
- (void)_registerOrUnregisterForActivities:(BOOL)a0;
- (void)_registerOrUnregisterForBackgroundTaskWithRequest:(id)a0 withSelector:(SEL)a1 isRegister:(BOOL)a2;
- (void)_routineStateAnalyzerExecute:(id)a0;
- (void)_startMonitoringEvents;
- (void)_wifiAnalyticsExecute:(id)a0;
- (void)addLabelForConnectionToken:(id)a0 label:(id)a1;
- (void)addLabelForConnectionToken:(id)a0 label:(id)a1 betweenStartDate:(id)a2 andEndDate:(id)a3;
- (void)createCustomLoiAtCurrentLocationForConnectionToken:(id)a0 withConfiguration:(id)a1;
- (id)createServiceWithServiceType:(unsigned long long)a0 locationTypes:(id)a1 clientId:(id)a2;
- (id)deleteServiceWithIdentifier:(id)a0 clientIdentifier:(id)a1;
- (void)disconnectWithConnectionToken:(id)a0 clientIdentifier:(id)a1 requestIdentifier:(id)a2;
- (id)exportDatabase;
- (id)imageFeaturesDebugWithTask:(unsigned long long)a0 additionalInformation:(id)a1;
- (id)polarisDebugWithTask:(unsigned long long)a0;
- (id)purgeDatabase;
- (id)queryServicesForClient:(id)a0;
- (void)removeCustomLoiWithIdentifier:(id)a0 forConnectionToken:(id)a1;
- (void)removePendingConnectionRequestsByConnectionToken:(id)a0;
- (void)requestCurrentMicroLocationWithAdditionalInformation:(id)a0 clientId:(id)a1;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(id)a0 clientId:(id)a1;
- (void)requestModelLearningForConnectionToken:(id)a0 requestIdentifier:(id)a1;
- (void)requestObservationForConnectionToken:(id)a0 clientIdentifier:(id)a1 requestIdentifier:(id)a2;
- (void)requestPredictionForConnectionToken:(id)a0 clientIdentifier:(id)a1 requestIdentifier:(id)a2;
- (void)runWithConfiguration:(id)a0 serviceIdentifier:(id)a1 legacyServiceIdentifier:(id)a2 clientIdentifier:(id)a3 connectionToken:(id)a4 requestIdentifier:(id)a5;
- (void)setDependencies:(struct unique_ptr<ULLogicAdapterImpl, std::default_delete<ULLogicAdapterImpl>> { struct ULLogicAdapterImpl *x0; })a0 peripheralControl:(id)a1 environment:(id)a2;
- (void)startRapportSession;
- (void)stopRapportSession;

@end
