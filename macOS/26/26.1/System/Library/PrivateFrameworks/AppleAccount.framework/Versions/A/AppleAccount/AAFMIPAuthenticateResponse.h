@class NSString, NSDictionary;

@interface AAFMIPAuthenticateResponse : AAResponse {
    NSDictionary *_tokens;
    NSDictionary *_appleAccountInfo;
}

@property (readonly, nonatomic) NSString *fmipWipeToken;
@property (readonly, nonatomic) NSString *fmipUrl;
@property (readonly, nonatomic) NSString *fmipDsid;

+ (id)_privacySensitiveKeys;

- (id)privacySensitiveResponseBody;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
