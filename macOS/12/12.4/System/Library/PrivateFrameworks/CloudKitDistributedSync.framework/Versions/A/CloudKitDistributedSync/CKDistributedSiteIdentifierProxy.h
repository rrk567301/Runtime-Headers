@interface CKDistributedSiteIdentifierProxy : CKXStructProxyBase <CKXReadStructProxy>

- (id)identifier;
- (id)modifier;
- (void)copyIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyModifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (id)siteIdentifier;

@end
