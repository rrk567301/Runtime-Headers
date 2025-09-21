@interface SIRINLUEXTERNALReferenceContext : PBCodable <NSCopying> {
    struct { unsigned char contextualReference : 1; unsigned char disambiguationNeeded : 1; } _has;
}

@property (nonatomic) char hasContextualReference;
@property (nonatomic) char contextualReference;
@property (nonatomic) char hasDisambiguationNeeded;
@property (nonatomic) char disambiguationNeeded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
