@class NSString;

@interface TITypologyPreferencesEnabledForTesting : TITypologyPreferences

@property (retain, nonatomic) NSString *outpath;

- (BOOL)isInternalDeviceWithForcedTypologyLoggingForTesting;
- (BOOL)typologyLoggingEnabled;
- (long long)maxBytesPersistedTypologyRecords;
- (void).cxx_destruct;
- (id)typologyDirectoryURL;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (id)initWithOutputPath:(id)a0;

@end
