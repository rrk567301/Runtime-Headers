@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (void)persistMapsBucketId:(id)a0;
- (unsigned char)persistedIsSiriEnabled;
- (void)persistSiriLocale:(id)a0;
- (void)persistAIState:(long long)a0;
- (id)persistedMapsBucketId;
- (id)persistedActiveDictationLocales;
- (void)persistMapsDeviceCountryCode:(id)a0;
- (void)persistActiveDictationLocales:(id)a0;
- (void)persistOptOutStatus:(unsigned char)a0;
- (id)initWithKeyValueStore:(id)a0;
- (unsigned char)persistedOptOutStatus;
- (id)persistedSiriLocale;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (id)persistedMapsDeviceCountryCode;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)a0;
- (long long)persistedAIState;
- (unsigned char)persistedDiagnosticsUsageEnabled;
- (void).cxx_destruct;

@end
