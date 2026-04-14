@interface CKMergeableValueIDProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)identifier;
- (id)zoneName;
- (id)mergeableValueID;
- (id)zoneOwnerName;
- (unsigned long long)identifierSize;
- (void)copyIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (unsigned long long)zoneNameSize;
- (void)copyZoneNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (unsigned long long)zoneOwnerNameSize;
- (void)copyZoneOwnerNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
