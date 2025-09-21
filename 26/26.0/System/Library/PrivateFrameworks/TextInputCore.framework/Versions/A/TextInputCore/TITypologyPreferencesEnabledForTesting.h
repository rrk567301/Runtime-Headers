@class NSString;

@interface TITypologyPreferencesEnabledForTesting : TITypologyPreferences

@property (retain, nonatomic) NSString *outpath;

- (long long)maxBytesPersistedTypologyRecords;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (id)typologyDirectoryURL;
- (BOOL)isInternalDeviceWithForcedTypologyLoggingForTesting;
- (BOOL)typologyLoggingEnabled;
- (void).cxx_destruct;
- (id)initWithOutputPath:(id)a0;

@end
