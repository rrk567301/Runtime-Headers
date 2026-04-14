@interface CKMergeableValueIDProxy : CKXStructProxyBase <CKXReadStructProxy>

- (id)identifier;
- (id)zoneName;
- (id)zoneOwnerName;
- (void)copyIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyZoneNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyZoneOwnerNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (id)mergeableValueID;

@end
