@interface HomeDataModel.MockThermostatCluster : MTRClusterThermostat {
    void /* unknown type, empty encoding */ attributeStates;
    void /* unknown type, empty encoding */ commandObserver;
    void /* unknown type, empty encoding */ containingDevice;
    void /* unknown type, empty encoding */ lastKnownEndpointID;
    void /* unknown type, empty encoding */ clusterKind;
    void /* unknown type, empty encoding */ supportsApplePreset;
    void /* unknown type, empty encoding */ updatePresets;
    void /* unknown type, empty encoding */ setPresetsEditable;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (void)writeAttributeTemperatureSetpointHoldDurationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeTemperatureSetpointHoldWithValue:(id)a0 expectedValueInterval:(id)a1;

@end
