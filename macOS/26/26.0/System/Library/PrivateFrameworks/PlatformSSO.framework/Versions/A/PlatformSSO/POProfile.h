@class SOFullProfile, NSString, NSArray, NSDictionary, NSData, NSNumber;

@interface POProfile : NSObject

@property (copy, nonatomic) SOFullProfile *profile;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSArray *URLPrefix;
@property (readonly, copy, nonatomic) NSDictionary *extensionData;
@property (readonly, nonatomic) NSString *registrationToken;
@property (readonly) int authenticationMethod;
@property BOOL useSharedDeviceKeys;
@property (readonly, nonatomic) NSString *accountDisplayName;
@property (retain, nonatomic) NSNumber *loginFrequency;
@property BOOL createUsersEnabled;
@property BOOL createFirstUserDuringSetupEnabled;
@property (readonly, nonatomic) NSArray *createUserAuthenticationMethods;
@property BOOL authorizationEnabled;
@property (readonly, nonatomic) NSDictionary *tokenToUserMapping;
@property (readonly) long long newUserAuthorizationMode;
@property (readonly) long long userAuthorizationMode;
@property (readonly, nonatomic) NSArray *administratorGroups;
@property (readonly, nonatomic) NSArray *otherGroups;
@property (readonly, nonatomic) NSDictionary *authorizationGroups;
@property (nonatomic) unsigned long long fileVaultPolicy;
@property (nonatomic) unsigned long long loginPolicy;
@property (nonatomic) unsigned long long unlockPolicy;
@property (nonatomic) long long offlineGracePeriod;
@property (nonatomic) long long requireAuthGracePeriod;
@property (copy, nonatomic) NSArray *nonPlatformSSOAccounts;
@property BOOL allowDeviceIdentifiersInAttestation;
@property (readonly, nonatomic) NSString *accessKeyTerminalIdentityUUID;
@property (readonly) BOOL allowAccessKeyExpressMode;
@property (readonly, nonatomic) NSData *accessKeyReaderGroupIdentifier;
@property BOOL synchronizeProfilePicture;
@property BOOL temporarySessionQuickLogin;
@property BOOL enableRegistrationDuringSetup;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)translatePolicy:(id)a0;

@end
