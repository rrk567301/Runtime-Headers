@class NSString;

@interface TITypologyPreferencesEnabledForTesting : TITypologyPreferences

@property (retain, nonatomic) NSString *outpath;

- (id)typologyDirectoryURL;
- (long long)maxBytesPersistedTypologyRecords;
- (BOOL)isInternalDeviceWithForcedTypologyLoggingForTesting;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (void).cxx_destruct;
- (BOOL)typologyLoggingEnabled;
- (id)initWithOutputPath:(id)a0;

@end
