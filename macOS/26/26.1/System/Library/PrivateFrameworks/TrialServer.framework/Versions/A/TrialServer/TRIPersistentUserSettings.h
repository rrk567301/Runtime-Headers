@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (unsigned char)persistedOptOutStatus;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)a0;
- (id)persistedActiveDictationLocales;
- (void)persistSiriLocale:(id)a0;
- (void)persistAIState:(long long)a0;
- (long long)persistedAIState;
- (void)persistMapsDeviceCountryCode:(id)a0;
- (id)persistedMapsDeviceCountryCode;
- (id)initWithKeyValueStore:(id)a0;
- (unsigned char)persistedIsSiriEnabled;
- (void)persistOptOutStatus:(unsigned char)a0;
- (unsigned char)persistedDiagnosticsUsageEnabled;
- (void).cxx_destruct;
- (id)persistedMapsBucketId;
- (void)persistMapsBucketId:(id)a0;
- (id)persistedSiriLocale;
- (void)persistActiveDictationLocales:(id)a0;
- (void)persistIsSiriEnabled:(unsigned char)a0;

@end
