@class NSMutableArray;

@interface HDCloudSyncCodableAttachmentReferenceTombstones : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attachmentReferenceTombstones;

+ (Class)attachmentReferenceTombstoneType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAttachmentReferenceTombstones;
- (void)addAttachmentReferenceTombstone:(id)a0;
- (unsigned long long)attachmentReferenceTombstonesCount;
- (id)attachmentReferenceTombstoneAtIndex:(unsigned long long)a0;

@end
