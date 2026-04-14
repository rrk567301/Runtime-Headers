@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)reference;
- (unsigned char)type;
- (id)timestamp;
- (id)location;

@end
