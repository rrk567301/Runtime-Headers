@interface CKDistributedTimestampProxy : CKXStructProxyBase <CKXReadStructProxy>

- (unsigned char)modifier;
- (id)timestamp;
- (unsigned long long)clock;
- (BOOL)unordered;
- (id)distributedSiteIdentifier;
- (id)siteIdentifier;
- (void)copySiteIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
