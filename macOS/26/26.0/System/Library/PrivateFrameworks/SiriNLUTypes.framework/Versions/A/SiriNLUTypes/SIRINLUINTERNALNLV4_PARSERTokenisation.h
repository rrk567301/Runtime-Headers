@class NSString, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALNLV4_PARSERTokenisation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOriginalUtterance;
@property (retain, nonatomic) NSString *originalUtterance;
@property (readonly, nonatomic) BOOL hasNormalisedUtterance;
@property (retain, nonatomic) NSString *normalisedUtterance;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;

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

@end
