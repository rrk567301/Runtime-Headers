@class NSArray;
@protocol AXAuditDeviceSettingsManagerDelegate;

@interface AXAuditDeviceSettingsManager : NSObject

@property (retain, nonatomic) NSArray *_cachedSettings;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSArray *defaultSettings;
@property (weak, nonatomic) id<AXAuditDeviceSettingsManagerDelegate> delegate;
@property (nonatomic) BOOL deviceSettingsCanBeRestored;
@property long long hostAPIVersion;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (id)settingsToCache;
- (void)cacheDeviceSettingsValues;
- (void)restoreDeviceSettingsValues;
- (void)updateCurrentValueForAllSettingsAndPostNotificationIfChanged:(BOOL)a0;
- (id)settingForIdentifier:(id)a0;
- (void)resetToDefaultAccessibilitySettings;
- (void)updateSetting:(id)a0 withNumberValue:(id)a1;

@end
