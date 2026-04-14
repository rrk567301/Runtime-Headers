@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (id)persistedMapsDeviceCountryCode;
- (void)persistMapsBucketId:(id)a0;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)a0;
- (id)_persistedArchivableObjectForKey:(id)a0 ofClasses:(id)a1;
- (void)_persistArchivableObject:(id)a0 forKey:(id)a1;
- (void)persistMapsDeviceCountryCode:(id)a0;
- (id)persistedAdsBucketId;
- (id)initWithKeyValueStore:(id)a0;
- (unsigned char)persistedDiagnosticsUsageEnabled;
- (void)persistSiriLocale:(id)a0;
- (void)persistAdsBucketId:(id)a0;
- (void).cxx_destruct;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (void)persistOptOutStatus:(unsigned char)a0;
- (void)persistAIState:(long long)a0;
- (id)persistedSiriLocale;
- (id)persistedMapsBucketId;
- (id)persistedStorefront;
- (void)persistStorefront:(id)a0;
- (unsigned char)persistedOptOutStatus;
- (long long)persistedAIState;
- (void)persistActiveDictationLocales:(id)a0;
- (unsigned char)persistedIsSiriEnabled;
- (id)persistedActiveDictationLocales;

@end
