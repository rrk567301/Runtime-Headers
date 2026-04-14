@class NSData, NSString;

@interface MCMClientIdentityIndex : NSObject <NSCopying> {
    NSData *_auditToken;
    NSData *_proximateAuditToken;
    NSString *_personaUniqueString;
}

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 proximateAuditToken:(struct { unsigned int x0[8]; })a1 personaUniqueString:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToClientIdentityIndex:(id)a0;

@end
