@class NSMutableArray;

@interface HDCloudSyncCodableAttachmentReferenceTombstones : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attachmentReferenceTombstones;

+ (Class)attachmentReferenceTombstoneType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAttachmentReferenceTombstone:(id)a0;
- (id)attachmentReferenceTombstoneAtIndex:(unsigned long long)a0;
- (unsigned long long)attachmentReferenceTombstonesCount;
- (void)clearAttachmentReferenceTombstones;

@end
