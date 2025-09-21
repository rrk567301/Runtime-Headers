@class NSString, NSArray, NSDictionary, NSData, NSDate, _IDSAccount;

@interface IDSAccount : NSObject {
    _IDSAccount *_internal;
}

@property (readonly, nonatomic) NSString *userUniqueIdentifier;
@property (readonly, nonatomic) NSArray *connectedDevices;
@property (readonly, retain, nonatomic) _IDSAccount *_internal;
@property (readonly, nonatomic) char isEnabled;
@property (nonatomic, setter=_setIsEnabled:) char _isEnabled;
@property (readonly, nonatomic) char isUsableForOuterMessaging;
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *aliasStrings;
@property (readonly, nonatomic) NSArray *vettedAliases;
@property (readonly, nonatomic) NSArray *handles;
@property (readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property (readonly, nonatomic) NSArray *pseudonyms;
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (retain, nonatomic) NSDictionary *accountInfo;
@property (readonly, nonatomic) int accountType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) long long profileValidationStatus;
@property (readonly, nonatomic) int profileValidationErrorReason;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, nonatomic) NSArray *accountRegisteredURIs;
@property (readonly, nonatomic) NSData *registrationCertificate;
@property (readonly, nonatomic) NSDate *dateRegistered;
@property (readonly, nonatomic) NSDate *nextRegistrationDate;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSDictionary *regionServerContext;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSString *primaryServiceName;
@property (readonly, nonatomic) char isUserDisabled;
@property (retain, nonatomic) NSString *regionID;
@property (retain, nonatomic) NSString *regionBasePhoneNumber;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *loginID;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) char canSend;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *nearbyDevices;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)setPassword:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)setAuthToken:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)passwordUpdated;
- (void)validateProfile;
- (void)registerAccount;
- (void)_callNearbyDevicesChanged;
- (id)_initWithDictionary:(id)a0 uniqueID:(id)a1 serviceName:(id)a2;
- (void)_reloadCachedDevices;
- (void)_reregisterAndReidentify:(char)a0;
- (void)addAliases:(id)a0;
- (void)addRegistrationDelegate:(id)a0 queue:(id)a1;
- (void)authenticateAccount;
- (void)deactivateAndPurgeIdentify;
- (void)forceRemoveAccount;
- (id)initWithDictionary:(id)a0 uniqueID:(id)a1 serviceName:(id)a2;
- (id)initWithLoginID:(id)a0 uniqueID:(id)a1 serviceName:(id)a2;
- (id)matchingSim;
- (void)removeAliases:(id)a0;
- (void)removeRegistrationDelegate:(id)a0;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)a0;
- (void)updateAccountWithAccountInfo:(id)a0;
- (void)updateAuthorizationCredentials:(id)a0 token:(id)a1;
- (void)validateAliases:(id)a0;

@end
