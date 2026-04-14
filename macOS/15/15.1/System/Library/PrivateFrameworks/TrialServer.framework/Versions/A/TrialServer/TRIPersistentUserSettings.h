@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (void).cxx_destruct;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)a0;
- (id)initWithKeyValueStore:(id)a0;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (void)persistOptOutStatus:(unsigned char)a0;
- (void)persistSiriLocale:(id)a0;
- (unsigned char)persistedDiagnosticsUsageEnabled;
- (unsigned char)persistedIsSiriEnabled;
- (unsigned char)persistedOptOutStatus;
- (id)persistedSiriLocale;

@end
