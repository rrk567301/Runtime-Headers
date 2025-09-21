@interface HomeDataModel.AutoClimateModel : NSObject <HMHomeManagerDelegate, HMHomeDelegate> {
    void /* unknown type, empty encoding */ _homeToThermostatControllers;
    void /* unknown type, empty encoding */ _isTestMode;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void).cxx_destruct;

@end
