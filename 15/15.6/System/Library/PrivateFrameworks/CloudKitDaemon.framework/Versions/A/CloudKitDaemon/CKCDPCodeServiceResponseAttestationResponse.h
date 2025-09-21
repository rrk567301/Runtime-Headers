@class NSMutableArray;

@interface CKCDPCodeServiceResponseAttestationResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attestations;

+ (Class)attestationsType;

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
- (void)addAttestations:(id)a0;
- (id)attestationsAtIndex:(unsigned long long)a0;
- (unsigned long long)attestationsCount;
- (void)clearAttestations;

@end
