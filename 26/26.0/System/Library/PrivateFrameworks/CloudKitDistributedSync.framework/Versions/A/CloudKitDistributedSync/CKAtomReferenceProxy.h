@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)timestamp;
- (unsigned char)type;
- (id)reference;
- (id)location;

@end
