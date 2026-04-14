@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (unsigned char)type;
- (id)location;
- (id)timestamp;
- (id)reference;

@end
