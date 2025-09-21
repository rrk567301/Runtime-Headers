@interface GameStoreKit.GCOverlaySettingsObserver : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _availableProfiles;
    void /* unknown type, empty encoding */ _selectedProfile;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ availableProfilesObservation;
    void /* unknown type, empty encoding */ selectedProfileObservation;
    void /* unknown type, empty encoding */ controller;
}

- (void)handleControllerDidBecomeCurrent:(id)a0;
- (void)handleControllerDidStopBeingCurrent:(id)a0;

@end
