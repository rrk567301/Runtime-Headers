@class NSData, NSString;

@interface MCMClientIdentityIndex : NSObject <NSCopying> {
    NSData *_auditToken;
    NSData *_proximateAuditToken;
    NSString *_personaUniqueString;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 proximateAuditToken:(struct { unsigned int x0[8]; })a1 personaUniqueString:(id)a2;
- (char)isEqualToClientIdentityIndex:(id)a0;

@end
