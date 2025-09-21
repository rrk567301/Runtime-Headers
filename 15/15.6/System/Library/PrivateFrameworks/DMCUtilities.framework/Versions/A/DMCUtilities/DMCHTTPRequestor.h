@class NSString, NSArray;
@protocol DMCHTTPAuthenticator;

@interface DMCHTTPRequestor : NSObject <NSURLSessionDataDelegate>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSArray *anchorCertificateRefs;
@property (retain, nonatomic) id selfReference;
@property (nonatomic) char didFailDueToMissingCredentials;
@property (nonatomic) char didFailDueToCertNotTrusted;
@property (retain, nonatomic) id<DMCHTTPAuthenticator> authenticator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getServerErrorCodeFromResponseDictionary:(id)a0;
+ (id)_getServerErrorDetailsFromResponseDictionary:(id)a0;
+ (id)_getServerErrorMessageFromResponseDictionary:(id)a0;
+ (char)_parsePairingTokenMissingErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;
+ (char)_parsePlatformSSORequiredErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;
+ (char)_parseSoftwareUpdateRequiredErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;
+ (char)_parseUnrecognizedDeviceErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;
+ (char)_parseWellKnownFailedErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;
+ (id)jsonDictFromResponse:(id)a0;
+ (char)parse403ErrorWithResponseDictionary:(id)a0 outError:(id *)a1;
+ (char)parsePredefined403ErrorWithResponseDictionary:(id)a0 outError:(id *)a1;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)startWithRequest:(id)a0 username:(id)a1 password:(id)a2 anchorCertificateRefs:(id)a3 completionBlock:(id /* block */)a4;

@end
