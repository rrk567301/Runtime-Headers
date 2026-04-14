@class NSData;

@interface CKDPStreamingAssetFooter : PBCodable <NSCopying>

@property (nonatomic) int status;
@property (retain, nonatomic) NSData *md5;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
