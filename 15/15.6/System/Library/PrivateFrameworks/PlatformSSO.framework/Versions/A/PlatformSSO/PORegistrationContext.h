@class POUIRegistrationWindow, NSString, LAContext, NSData, POExtension, NSNumber, POProfile;

@interface PORegistrationContext : NSObject

@property (getter=isRepair) char repair;
@property (getter=isNewPasswordUser) char newPasswordUser;
@property (getter=isNewSmartCarddUser) char newSmartCardUser;
@property char newUserBindingComplete;
@property char userNotified;
@property char resetKeys;
@property (getter=isRetry) char retry;
@property int failureCount;
@property long long state;
@property int authMethod;
@property long long options;
@property (retain) NSString *extensionIdentifier;
@property (retain) NSString *containerAppBundleIdentifier;
@property (retain) NSString *registrationToken;
@property char useSharedDeviceKeys;
@property char deviceKeysShouldChange;
@property char migratingDeviceKeys;
@property char userSEPKeyInvalid;
@property (retain, nonatomic) NSNumber *signingAlgorithm;
@property (retain, nonatomic) NSNumber *userSigningAlgorithm;
@property (retain, nonatomic) NSNumber *encryptionAlgorithm;
@property (retain) NSString *loginUserName;
@property (retain) NSString *userName;
@property (retain) LAContext *credentialContext;
@property char authorizationProvided;
@property (retain) NSString *smartCardTokenId;
@property (retain) NSData *smartCardHash;
@property (retain) POExtension *ssoExtension;
@property long long protocolVersion;
@property (retain) POProfile *profile;
@property (retain) POUIRegistrationWindow *registrationUI;
@property char userIsPlatformSSOUser;

- (id)init;
- (void).cxx_destruct;
- (char)isUserNotification;

@end
