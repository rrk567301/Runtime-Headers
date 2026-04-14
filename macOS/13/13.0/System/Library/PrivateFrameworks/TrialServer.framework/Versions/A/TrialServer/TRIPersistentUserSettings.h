@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (void).cxx_destruct;
- (id)initWithKeyValueStore:(id)a0;
- (unsigned char)persistedOptOutStatus;
- (void)persistOptOutStatus:(unsigned char)a0;
- (unsigned char)persistedIsSiriEnabled;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (id)persistedSiriLocale;
- (void)persistSiriLocale:(id)a0;

@end
