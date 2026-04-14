@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)reference;
- (unsigned char)type;
- (id)location;
- (id)timestamp;

@end
