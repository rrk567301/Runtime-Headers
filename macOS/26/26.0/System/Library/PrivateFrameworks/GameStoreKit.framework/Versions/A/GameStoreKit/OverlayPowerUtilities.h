@class NSDictionary;

@interface OverlayPowerUtilities : NSObject {
    unsigned long long _notificationHandle;
    NSDictionary *_powerPreferences;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_powerPreferences;
- (id)_valueForKey:(id)a0 powerSource:(id)a1;
- (unsigned long long)ecoModeFor:(id)a0;
- (BOOL)isDevicePluggedIn;
- (BOOL)hasFans;
- (id)numFans;
- (void)registerPrefsChangeNotification;
- (BOOL)isDeviceOnBattery;

@end
