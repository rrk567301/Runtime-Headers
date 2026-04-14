@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attestations;

+ (Class)attestationsType;

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
- (void)clearAttestations;
- (void)addAttestations:(id)a0;
- (unsigned long long)attestationsCount;
- (id)attestationsAtIndex:(unsigned long long)a0;

@end
