@interface CKDistributedSiteIdentifierProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)identifier;
- (id)modifier;
- (id)siteIdentifier;
- (unsigned long long)identifierSize;
- (void)copyIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (unsigned long long)modifierSize;
- (void)copyModifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
