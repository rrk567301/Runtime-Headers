@interface CKAtomLocationProxy : CKXStructProxyBase <CKXReadStructProxy>

- (id)identifier;
- (id)location;
- (id)zoneName;
- (id)zoneOwnerName;
- (id)objectCopy;
- (void)copyIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyZoneNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyZoneOwnerNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
