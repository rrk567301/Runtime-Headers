@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (long long)persistedAIState;
- (void)_persistArchivableObject:(id)a0 forKey:(id)a1;
- (void)persistAdsBucketId:(id)a0;
- (id)persistedAdsBucketId;
- (void)persistMapsBucketId:(id)a0;
- (id)persistedActiveDictationLocales;
- (unsigned char)persistedDiagnosticsUsageEnabled;
- (id)initWithKeyValueStore:(id)a0;
- (id)persistedMapsBucketId;
- (void).cxx_destruct;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)a0;
- (void)persistMapsDeviceCountryCode:(id)a0;
- (void)persistSiriLocale:(id)a0;
- (id)persistedMapsDeviceCountryCode;
- (id)persistedSiriLocale;
- (unsigned char)persistedOptOutStatus;
- (void)persistAIState:(long long)a0;
- (void)persistOptOutStatus:(unsigned char)a0;
- (unsigned char)persistedIsSiriEnabled;
- (id)persistedStorefront;
- (void)persistStorefront:(id)a0;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (id)_persistedArchivableObjectForKey:(id)a0 ofClasses:(id)a1;
- (void)persistActiveDictationLocales:(id)a0;

@end
