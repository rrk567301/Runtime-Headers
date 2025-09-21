@class SIRINLUEXTERNALUsoLabel;

@interface SIRINLUEXTERNALUsoEdgeLabel : PBCodable <NSCopying> {
    struct { unsigned char enumeration : 1; unsigned char usoElementId : 1; } _has;
}

@property (nonatomic) char hasUsoElementId;
@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) char hasEnumeration;
@property (nonatomic) unsigned int enumeration;
@property (readonly, nonatomic) char hasBaseEdgeLabel;
@property (retain, nonatomic) SIRINLUEXTERNALUsoLabel *baseEdgeLabel;

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
