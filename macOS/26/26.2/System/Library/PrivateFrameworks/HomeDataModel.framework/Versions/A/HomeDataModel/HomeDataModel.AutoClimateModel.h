@interface HomeDataModel.AutoClimateModel : NSObject <HMHomeManagerDelegate, HMHomeDelegate> {
    void /* unknown type, empty encoding */ _homeToThermostatControllers;
    void /* unknown type, empty encoding */ _isTestMode;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)home:(id)a0 didAddRoom:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void).cxx_destruct;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (id)init;
- (void)home:(id)a0 didUpdateRoom:(id)a1 forAccessory:(id)a2;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;

@end
