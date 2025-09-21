@class NSString, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALNLV4_PARSERTokenisation : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasOriginalUtterance;
@property (retain, nonatomic) NSString *originalUtterance;
@property (readonly, nonatomic) char hasNormalisedUtterance;
@property (retain, nonatomic) NSString *normalisedUtterance;
@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;

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
