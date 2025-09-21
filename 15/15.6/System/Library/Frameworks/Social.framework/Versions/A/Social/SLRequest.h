@class NSData, NSString, NSURL, NSMutableDictionary, ACAccount, NSMutableArray, OACredential, SLService;

@interface SLRequest : NSObject {
    ACAccount *_account;
    OACredential *_OAuthCredential;
    NSMutableArray *_multiParts;
    NSString *_multiPartBoundary;
    int _callingPID;
    NSString *_applicationID;
    NSString *_contentType;
    NSData *_payload;
    unsigned long long _networkServiceType;
    SLService *_service;
    struct OpaqueCFHTTPCookieStorage { } *_privateCookieStorage;
}

@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) long long requestMethod;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSMutableDictionary *parameters;

+ (id)requestForServiceType:(id)a0 requestMethod:(long long)a1 URL:(id)a2 parameters:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (void)setContentType:(id)a0;
- (id)_parameterString;
- (unsigned long long)networkServiceType;
- (void)setNetworkServiceType:(unsigned long long)a0;
- (void)setParameterValue:(id)a0 forKey:(id)a1;
- (void)setPayload:(id)a0;
- (id)OAuthCredential;
- (id)_HTTPMethodName;
- (void)addMultipartData:(id)a0 withName:(id)a1 type:(id)a2;
- (void)_addAuthenticationParameters:(id)a0;
- (id)_allParameters;
- (void)_appendCoreSig1Signature;
- (id)_commandName;
- (id)_preparedURL;
- (char)_requiresAuthorization;
- (char)_shouldAppendLinkedInChildAccessTokenToRequest;
- (char)_shouldAppendTencentWeiboParametersToRequest;
- (char)_shouldRetryAfterCount:(int)a0 delay:(float *)a1;
- (id)_urlEncodedString:(id)a0;
- (void)addMultiPart:(id)a0;
- (void)addMultipartData:(id)a0 withName:(id)a1 type:(id)a2 filename:(id)a3;
- (int)callingPID;
- (id)completeMultiParts;
- (id)dictionaryRepresentationForJSONSerialization;
- (id)initWithServiceType:(id)a0 URL:(id)a1 parameters:(id)a2 requestMethod:(long long)a3;
- (id)multiPartBodyData;
- (id)multiPartBoundary;
- (id)multiParts;
- (id)parameterForKey:(id)a0;
- (void)performJSONRequestWithHandler:(id /* block */)a0;
- (void)performJSONRequestWithHandler:(id /* block */)a0 retryCount:(int)a1;
- (void)performRequestWithHandler:(id /* block */)a0;
- (id)preparedURLRequest;
- (void)removeParameterForKey:(id)a0;
- (void)setApplicationID:(id)a0;
- (void)setCallingPID:(int)a0;
- (void)setMultiPartBoundary:(id)a0;
- (void)setOAuthCredential:(id)a0;
- (char)shouldIncludeParameterString;

@end
