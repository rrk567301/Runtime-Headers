@class NSMutableArray;

@interface HDCloudSyncCodableAttachmentReferenceTombstones : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attachmentReferenceTombstones;

+ (Class)attachmentReferenceTombstoneType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addAttachmentReferenceTombstone:(id)a0;
- (id)attachmentReferenceTombstoneAtIndex:(unsigned long long)a0;
- (unsigned long long)attachmentReferenceTombstonesCount;
- (void)clearAttachmentReferenceTombstones;

@end
