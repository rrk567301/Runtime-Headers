@class SIRINLUEXTERNALParser;

@interface SIRINLUINTERNALITFMITFMParserResponse : PBCodable <NSCopying> {
    struct { unsigned char classificationProbability : 1; unsigned char classificationLabel : 1; } _has;
}

@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) BOOL classificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;
@property (nonatomic) float classificationProbability;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;

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

@end
