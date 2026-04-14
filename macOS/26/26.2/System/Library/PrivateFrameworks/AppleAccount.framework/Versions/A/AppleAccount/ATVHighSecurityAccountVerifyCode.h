@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {
    NSString *_hsaCode;
}

+ (Class)responseClass;

- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 device:(id)a1 hsaCode:(id)a2;

@end
