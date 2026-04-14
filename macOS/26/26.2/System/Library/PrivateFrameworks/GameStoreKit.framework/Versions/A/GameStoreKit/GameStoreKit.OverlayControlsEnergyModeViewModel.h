@interface GameStoreKit.OverlayControlsEnergyModeViewModel : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _energyModeSettingsCustomizable;
    void /* unknown type, empty encoding */ supportsEnergyModePrefs;
    void /* unknown type, empty encoding */ supportsLowPowerMode;
    void /* unknown type, empty encoding */ supportsProMode;
    void /* unknown type, empty encoding */ hasFans;
    void /* unknown type, empty encoding */ deviceHasBattery;
    void /* unknown type, empty encoding */ _batteryLevel;
    void /* unknown type, empty encoding */ _isDeviceOnBattery;
    void /* unknown type, empty encoding */ _isDevicePluggedIn;
    void /* unknown type, empty encoding */ _isBatteryCharging;
    void /* unknown type, empty encoding */ _isBatteryCharged;
    void /* unknown type, empty encoding */ _gamingEnergyModePreference;
    void /* unknown type, empty encoding */ _systemSettingsEnergyModePreference;
    void /* unknown type, empty encoding */ powerActivityManager;
    void /* unknown type, empty encoding */ overlayPowerUtilities;
    void /* unknown type, empty encoding */ _gamingSessionActive;
    void /* unknown type, empty encoding */ _gameSessionDidChangeNotificationToken;
    void /* unknown type, empty encoding */ gamingSessionChangedNotification;
    void /* unknown type, empty encoding */ gamingEnergyModeNotification;
    void /* unknown type, empty encoding */ _gamingEnergyModeNotificationToken;
    void /* unknown type, empty encoding */ batteryPowerKey;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)updatePowerState;
- (void)userPreferencesDidChange;

@end
