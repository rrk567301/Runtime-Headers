@class NSArray, NSString, NSError, NSObject;
@protocol OS_os_log, ECAuthenticationCredentials;

@interface ECSASLClient : NSObject <EFLoggable> {
    char *_userLanguageCode;
    char *_authenticationName;
    char *_authorizationName;
    struct sasl_secret { unsigned long long x0; unsigned char x1[1]; } *_password;
    char *_authenticationPersonID;
    char *_authorizationPersonID;
    char *_appleToken;
    char *_machineID;
    char *_oneTimePassword;
    char *_clientInfo;
    char *_oauthToken;
    char *_appleToken2;
}

@property (class, readonly, copy) NSArray *installedMechanisms;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (copy, nonatomic) NSString *selectedMechanismName;
@property (nonatomic) long long saslStatus;
@property (retain, nonatomic) NSError *saslError;
@property (nonatomic) unsigned int encryptionBufferSize;
@property (copy, nonatomic) NSArray *mechanismNames;
@property (readonly, nonatomic) struct sasl_callback { unsigned long long x0; void *x1; void *x2; } *callbacks;
@property (readonly, nonatomic) struct sasl_conn { } *saslConnection;
@property (nonatomic) char mechanismUsesPlainText;
@property (nonatomic) char lastResponseIncludesCredential;
@property (weak, nonatomic) id<ECAuthenticationCredentials> credentials;
@property (nonatomic) char excludeAuthorizationName;
@property (nonatomic) char excludeInitialResponse;
@property (readonly, nonatomic) char lastResponseIncludesPlainTextCredential;
@property (nonatomic) char isATOKEN2Enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)start;
- (void)_clearAuthenticationCallbackBuffers;
- (void)_handleGenericError:(int)a0 description:(id)a1;
- (void)_handleNeedsUserInteraction:(struct sasl_interact { unsigned long long x0; char *x1; char *x2; char *x3; void *x4; unsigned int x5; } *)a0;
- (void)_handleStartFailure:(int)a0;
- (char)_logGenericError:(int)a0 saslConnection:(struct sasl_conn { } *)a1 description:(id)a2 error:(id *)a3;
- (void)_retrieveEncryptionBufferSize;
- (id)initWithMechanismNames:(id)a0 credentials:(id)a1 externalSecurityLayer:(unsigned int)a2 allowPlainText:(char)a3;
- (id)newDecryptedDataForBytes:(const char *)a0 length:(unsigned int)a1;
- (id)newEncryptedDataForBytes:(const char *)a0 length:(unsigned int)a1;
- (id)responseForServerData:(id)a0;
- (char)useATOKEN2Authentication;

@end
