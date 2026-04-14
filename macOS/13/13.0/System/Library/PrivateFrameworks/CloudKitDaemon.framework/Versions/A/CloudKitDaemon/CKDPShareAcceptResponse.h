@class CKDPShare;

@interface CKDPShareAcceptResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasShare;
@property (retain, nonatomic) CKDPShare *share;

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

@end
