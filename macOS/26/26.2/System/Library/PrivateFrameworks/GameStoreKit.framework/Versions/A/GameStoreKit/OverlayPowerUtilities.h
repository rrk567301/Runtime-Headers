@class NSDictionary;

@interface OverlayPowerUtilities : NSObject {
    unsigned long long _notificationHandle;
    NSDictionary *_powerPreferences;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_powerPreferences;
- (id)_valueForKey:(id)a0 powerSource:(id)a1;
- (unsigned long long)ecoModeFor:(id)a0;
- (BOOL)isDevicePluggedIn;
- (BOOL)hasFans;
- (void)registerPrefsChangeNotification;
- (id)numFans;
- (BOOL)isDeviceOnBattery;

@end
