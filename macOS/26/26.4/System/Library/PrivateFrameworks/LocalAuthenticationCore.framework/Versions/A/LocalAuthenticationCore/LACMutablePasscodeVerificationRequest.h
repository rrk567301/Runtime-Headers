@class NSNumber, NSString, NSDictionary, NSData, LACSecureData, LACAuditToken;

@interface LACMutablePasscodeVerificationRequest : NSObject <LACPasscodeVerificationRequest> {
    void /* function */ acmContext;
    void /* function */ options;
    void /* function */ pamService;
    void /* function */ pamUser;
    void /* function */ pamToken;
}

@property (nonatomic, readonly) LACSecureData *passcode;
@property (nonatomic, readonly) NSData *acmContext;
@property (nonatomic, readonly) LACAuditToken *auditToken;
@property (nonatomic) long long authenticator;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic) long long policy;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) BOOL bioLockoutRecovery;
@property (nonatomic, copy) NSString *pamService;
@property (nonatomic, copy) NSString *pamUser;
@property (nonatomic, copy) NSData *pamToken;
@property (nonatomic, readonly) NSString *description;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPasscode:(id)a0 acmContext:(id)a1 auditToken:(id)a2;
- (id)initWithPasscode:(id)a0 acmContext:(id)a1 auditToken:(id)a2 pamService:(id)a3 pamUser:(id)a4 pamToken:(id)a5;
- (id)initWithPasscode:(id)a0 acmContext:(id)a1 rawAuditToken:(struct { unsigned int x0[8]; })a2;

@end
