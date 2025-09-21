@class NSString;

@interface TITypologyPreferencesEnabledForTesting : TITypologyPreferences

@property (retain, nonatomic) NSString *outpath;

- (void).cxx_destruct;
- (id)initWithOutputPath:(id)a0;
- (char)isInternalDeviceWithForcedTypologyLoggingForTesting;
- (long long)maxBytesPersistedTypologyRecords;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (id)typologyDirectoryURL;
- (char)typologyLoggingEnabled;

@end
