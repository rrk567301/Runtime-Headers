@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (long long)persistedAIState;
- (id)initWithKeyValueStore:(id)a0;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)a0;
- (void)persistMapsDeviceCountryCode:(id)a0;
- (void)persistMapsBucketId:(id)a0;
- (id)persistedSiriLocale;
- (void)persistOptOutStatus:(unsigned char)a0;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (void)_persistArchivableObject:(id)a0 forKey:(id)a1;
- (id)persistedMapsDeviceCountryCode;
- (id)_persistedArchivableObjectForKey:(id)a0 ofClasses:(id)a1;
- (id)persistedActiveDictationLocales;
- (void)persistAdsBucketId:(id)a0;
- (void)persistAIState:(long long)a0;
- (void)persistActiveDictationLocales:(id)a0;
- (id)persistedAdsBucketId;
- (void).cxx_destruct;
- (id)persistedMapsBucketId;
- (void)persistStorefront:(id)a0;
- (unsigned char)persistedIsSiriEnabled;
- (unsigned char)persistedDiagnosticsUsageEnabled;
- (id)persistedStorefront;
- (unsigned char)persistedOptOutStatus;
- (void)persistSiriLocale:(id)a0;

@end
