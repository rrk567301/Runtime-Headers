@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)timestamp;
- (id)location;
- (id)reference;
- (unsigned char)type;

@end
