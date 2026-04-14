@class NSString, NSDictionary;

@interface iCloudFMIPAuthenticateResponse : iCloudAccountResponse {
    NSDictionary *_tokens;
    NSDictionary *_appleAccountInfo;
}

@property (readonly, nonatomic) NSString *fmipWipeToken;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
