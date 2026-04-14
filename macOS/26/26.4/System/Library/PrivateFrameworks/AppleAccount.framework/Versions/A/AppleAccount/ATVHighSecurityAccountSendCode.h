@class NSDictionary;

@interface ATVHighSecurityAccountSendCode : AAAppleTVRequest {
    NSDictionary *_device;
}

+ (Class)responseClass;

- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 device:(id)a1;

@end
