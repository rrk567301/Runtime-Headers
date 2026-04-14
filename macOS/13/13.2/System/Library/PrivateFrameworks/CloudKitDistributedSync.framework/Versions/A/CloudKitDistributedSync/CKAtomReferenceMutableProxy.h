@interface CKAtomReferenceMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)setType:(unsigned char)a0;
- (id)location;
- (id)timestamp;
- (void)copyFromReadProxy:(id)a0;
- (void)copyFromReference:(id)a0;

@end
