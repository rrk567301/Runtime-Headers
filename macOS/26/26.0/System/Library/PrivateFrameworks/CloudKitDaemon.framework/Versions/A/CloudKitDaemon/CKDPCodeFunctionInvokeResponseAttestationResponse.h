@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attestations;

+ (Class)attestationsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAttestations:(id)a0;
- (id)attestationsAtIndex:(unsigned long long)a0;
- (unsigned long long)attestationsCount;
- (void)clearAttestations;

@end
