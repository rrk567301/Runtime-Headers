@interface CKDistributedTimestampProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (unsigned long long)clock;
- (id)timestamp;
- (unsigned char)modifier;
- (id)siteIdentifier;
- (BOOL)unordered;
- (id)distributedSiteIdentifier;
- (void)copySiteIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (unsigned long long)siteIdentifierSize;

@end
