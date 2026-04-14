@class NSString;

@interface TITypologyPreferencesEnabledForTesting : TITypologyPreferences

@property (retain, nonatomic) NSString *outpath;

- (BOOL)typologyLoggingEnabled;
- (BOOL)isInternalDeviceWithForcedTypologyLoggingForTesting;
- (id)typologyDirectoryURL;
- (void).cxx_destruct;
- (long long)maxBytesPersistedTypologyRecords;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (id)initWithOutputPath:(id)a0;

@end
