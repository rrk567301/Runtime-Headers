@class SUSharedPrefs, SUBootPolicyUtil;

@interface SUTelemetryAdvancedPreferencesEvent : SUTelemetryPreferencesEvent

@property SUSharedPrefs *sharedPrefs;
@property SUBootPolicyUtil *bootPolicyUtil;

- (id)eventName;
- (id)init;
- (long long)telemetryServer;
- (unsigned char)_byteForNVRAMKey:(id)a0 namespace:(id)a1;
- (BOOL)_currentHardwareHasBridge;
- (id)createReportableDictionary;
- (id)initWithBootPolicyUtil:(id)a0 sharedPrefs:(id)a1;

@end
