@class POConfigurationVersion, NSString, POLoginConfiguration, PODaemonCoreConnection, POUserConfiguration, NSObject, PODeviceConfiguration;
@protocol POUserIdentifierProvider;

@interface POConfigurationCoreManager : NSObject {
    PODaemonCoreConnection *_serviceConnection;
    NSObject *_userLock;
}

@property (retain) NSString *userName;
@property (readonly) NSString *userIdentifier;
@property (retain) POConfigurationVersion *userConfigurationVersion;
@property (retain) POConfigurationVersion *loginConfigurationVersion;
@property (retain) POConfigurationVersion *deviceConfigurationVersion;
@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;
@property char sharedOnly;
@property (readonly) POUserConfiguration *currentUserConfiguration;
@property (readonly) PODeviceConfiguration *currentDeviceConfiguration;
@property (readonly) POLoginConfiguration *currentLoginConfiguration;
@property (readonly) PODeviceConfiguration *userDeviceConfiguration;

- (void).cxx_destruct;
- (id)deviceConfiguration;
- (id)loginConfiguration;
- (id)initWithUserName:(id)a0 identifierProvider:(id)a1 sharedOnly:(char)a2;
- (void)insertTokenForUserName:(id)a0;
- (char)isPlatformSSOUserName:(id)a0;
- (char)isTemporaryAccountUserName:(id)a0;
- (id)retrievePendingSSOTokensForUserName:(id)a0;
- (char)savePendingSSOTokens:(id)a0 forUserName:(id)a1;
- (char)saveStashedSSOTokens:(id)a0 forUserName:(id)a1;
- (char)updateLoginStateForUserName:(id)a0 state:(unsigned long long)a1 loginDate:(id)a2 loginType:(unsigned long long)a3;
- (char)updateLoginTypeForUserName:(id)a0 loginType:(unsigned long long)a1;
- (id)userConfigurationForUserName:(id)a0;
- (id)userLoginStateForUserName:(id)a0;
- (char)verifyTokenForUserName:(id)a0 passwordContext:(id)a1;
- (id)initWithUserName:(id)a0 identifierProvider:(id)a1 sharedOnly:(char)a2 volume:(id)a3;
- (id)retrieveStashedDecryptionContextForUserName:(id)a0;
- (id)retrieveStashedSSOTokensForUserName:(id)a0;
- (void)saveCachedContextsToDisk;
- (char)saveStashedDecryptionContext:(id)a0 forUserName:(id)a1;

@end
