@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>

- (unsigned long long)version;
- (id)value;
- (id)location;
- (id)timestamp;
- (unsigned long long)atomType;
- (id)references;
- (unsigned char)atomBehavior;
- (id)objectCopy;
- (void)copyValueBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
