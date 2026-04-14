@class NSString;

@interface TITypologyPreferencesEnabledForTesting : TITypologyPreferences

@property (retain, nonatomic) NSString *outpath;

- (id)typologyDirectoryURL;
- (BOOL)typologyLoggingEnabled;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (void).cxx_destruct;
- (BOOL)isInternalDeviceWithForcedTypologyLoggingForTesting;
- (long long)maxBytesPersistedTypologyRecords;
- (id)initWithOutputPath:(id)a0;

@end
