@class NSNumber, NSString, NSDictionary, NSData, LACSecureData, LACAuditToken;

@interface LACMutablePasscodeVerificationRequest : NSObject <LACPasscodeVerificationRequest> {
    void /* function */ acmContext;
    void /* function */ options;
}

@property (nonatomic, readonly) LACSecureData *passcode;
@property (nonatomic, readonly) NSData *acmContext;
@property (nonatomic, readonly) LACAuditToken *auditToken;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic) long long policy;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) BOOL bioLockoutRecovery;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPasscode:(id)a0 acmContext:(id)a1 auditToken:(id)a2;
- (id)initWithPasscode:(id)a0 acmContext:(id)a1 rawAuditToken:(struct { unsigned int x0[8]; })a2;

@end
