@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (unsigned char)type;
- (id)reference;
- (id)location;
- (id)timestamp;

@end
