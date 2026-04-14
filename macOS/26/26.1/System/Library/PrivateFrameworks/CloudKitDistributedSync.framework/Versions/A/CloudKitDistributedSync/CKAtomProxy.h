@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (unsigned long long)version;
- (id)value;
- (id)location;
- (id)timestamp;
- (unsigned long long)atomType;
- (id)references;
- (unsigned long long)valueSize;
- (unsigned char)atomBehavior;
- (void)copyValueBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
