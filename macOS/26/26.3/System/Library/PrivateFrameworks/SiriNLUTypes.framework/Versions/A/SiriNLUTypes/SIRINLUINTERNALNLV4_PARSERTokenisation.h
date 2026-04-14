@class NSString, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALNLV4_PARSERTokenisation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOriginalUtterance;
@property (retain, nonatomic) NSString *originalUtterance;
@property (readonly, nonatomic) BOOL hasNormalisedUtterance;
@property (retain, nonatomic) NSString *normalisedUtterance;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
