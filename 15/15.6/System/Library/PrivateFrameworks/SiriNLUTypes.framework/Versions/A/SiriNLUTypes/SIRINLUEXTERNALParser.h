@interface SIRINLUEXTERNALParser : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char parserId : 1; } _has;
}

@property (nonatomic) char hasAlgorithm;
@property (nonatomic) int algorithm;
@property (nonatomic) char hasParserId;
@property (nonatomic) int parserId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (int)StringAsParserId:(id)a0;
- (id)parserIdAsString:(int)a0;

@end
