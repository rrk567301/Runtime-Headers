@class DESBinary64Transport, DESBfloat16Transport, DESBinary32Transport;

@interface DESDataTransport : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBinary64;
@property (retain, nonatomic) DESBinary64Transport *binary64;
@property (readonly, nonatomic) char hasBinary32;
@property (retain, nonatomic) DESBinary32Transport *binary32;
@property (readonly, nonatomic) char hasBfloat16;
@property (retain, nonatomic) DESBfloat16Transport *bfloat16;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
