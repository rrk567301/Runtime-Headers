@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *entitlement;
@property (readonly, nonatomic) unsigned long long credentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_errorForCode:(int)a0 process:(id)a1 failedEntitlement:(id)a2;
+ (BOOL)_authenticateAuditToken:(id)a0 entitlement:(id)a1 credentials:(unsigned long long)a2 error:(out id *)a3;
+ (BOOL)authenticateAuditToken:(struct { unsigned int x0[8]; })a0 forEntitlement:(id)a1 error:(out id *)a2;
+ (id)sharedSystemClientAuthenticator;
+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;

- (id)initWithEntitlement:(id)a0 additionalCredentials:(unsigned long long)a1;
- (BOOL)authenticateClient:(id)a0;
- (BOOL)authenticateAuditToken:(id)a0 forEntitlement:(id)a1 error:(out id *)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithEntitlement:(id)a0;
- (id)init;
- (id)succinctDescription;
- (BOOL)authenticateClient:(id)a0 error:(out id *)a1;
- (BOOL)authenticateAuditToken:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCredentials:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)authenticateAuditToken:(id)a0 error:(out id *)a1;

@end
