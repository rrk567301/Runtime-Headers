@class NSString, LAContext, NSData, POExtension, NSNumber, POProfile;
@protocol POUIRegistrationUIProvider;

@interface PORegistrationContext : NSObject

@property (getter=isRunningInBuddy) BOOL runningInBuddy;
@property (getter=isBuddyFlow) BOOL buddyFlow;
@property (getter=isRepair) BOOL repair;
@property (getter=isNewPasswordUser) BOOL newPasswordUser;
@property (getter=isNewSmartCardUser) BOOL newSmartCardUser;
@property (getter=isNewSecureEnclaveUser) BOOL newSecureEnclaveUser;
@property BOOL newUserBindingComplete;
@property BOOL userNotified;
@property BOOL resetKeys;
@property BOOL credentialTransferCompleted;
@property (getter=isRetry) BOOL retry;
@property int failureCount;
@property long long state;
@property int authMethod;
@property long long options;
@property (retain) NSString *extensionIdentifier;
@property (retain) NSString *containerAppBundleIdentifier;
@property (retain) NSString *registrationToken;
@property BOOL useSharedDeviceKeys;
@property BOOL deviceKeysShouldChange;
@property BOOL migratingDeviceKeys;
@property BOOL userSEPKeyInvalid;
@property (retain, nonatomic) NSNumber *signingAlgorithm;
@property (retain, nonatomic) NSNumber *userSigningAlgorithm;
@property (retain, nonatomic) NSNumber *encryptionAlgorithm;
@property (retain) NSString *loginUserName;
@property (retain) NSString *userName;
@property (retain) LAContext *credentialContext;
@property BOOL authorizationProvided;
@property (retain) NSString *smartCardTokenId;
@property (retain) NSData *smartCardHash;
@property (retain) POExtension *ssoExtension;
@property long long protocolVersion;
@property (retain) POProfile *profile;
@property (retain) id<POUIRegistrationUIProvider> registrationUI;
@property BOOL userIsPlatformSSOUser;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUserNotification;

@end
