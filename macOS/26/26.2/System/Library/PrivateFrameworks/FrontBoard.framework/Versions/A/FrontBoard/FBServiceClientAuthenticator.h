@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *entitlement;
@property (readonly, nonatomic) unsigned long long credentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;
+ (id)_errorForCode:(int)a0 process:(id)a1 failedEntitlement:(id)a2;
+ (BOOL)authenticateAuditToken:(struct { unsigned int x0[8]; })a0 forEntitlement:(id)a1 error:(out id *)a2;
+ (id)sharedSystemClientAuthenticator;
+ (BOOL)_authenticateAuditToken:(id)a0 entitlement:(id)a1 credentials:(unsigned long long)a2 error:(out id *)a3;

- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (BOOL)authenticateClient:(id)a0;
- (id)initWithCredentials:(unsigned long long)a0;
- (id)initWithEntitlement:(id)a0;
- (BOOL)authenticateAuditToken:(id)a0 forEntitlement:(id)a1 error:(out id *)a2;
- (id)initWithEntitlement:(id)a0 additionalCredentials:(unsigned long long)a1;
- (BOOL)authenticateClient:(id)a0 error:(out id *)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)authenticateAuditToken:(id)a0;
- (BOOL)authenticateAuditToken:(id)a0 error:(out id *)a1;

@end
