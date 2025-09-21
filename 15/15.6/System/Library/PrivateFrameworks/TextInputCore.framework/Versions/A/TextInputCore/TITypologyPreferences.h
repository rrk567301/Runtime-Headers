@class NSURL;
@protocol TITypologyProfileOptInManaging;

@interface TITypologyPreferences : NSObject <TITypologyPreferences>

@property (weak, nonatomic) id<TITypologyProfileOptInManaging> typologyProfileOptInManager;
@property (readonly, nonatomic) char typologyLoggingEnabled;
@property (readonly, nonatomic) char typologyLoggingEnabledByProfile;
@property (readonly, nonatomic) NSURL *typologyDirectoryURL;
@property (readonly, nonatomic) char isTypologyInDatavault;
@property (readonly, nonatomic) unsigned long long persistenceStrategy;
@property (readonly, nonatomic) long long maxBytesPersistedTypologyRecords;
@property (readonly, nonatomic) long long maxBytesPersistedTypologyTraceLogs;
@property (readonly, nonatomic) double maxLifetimeInterval;

- (void).cxx_destruct;
- (char)_typologyLoggingEnabledByInternalPreference;
- (char)_typologyLoggingEnabledByProfile;
- (char)isInternalDeviceWithForcedTypologyLoggingForTesting;

@end
