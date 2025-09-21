@class NSString, SIRINLUEXTERNALRRBoundingBox;

@interface SIRINLUEXTERNALRRSurroundingText : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasText;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) char hasBoundingBox;
@property (retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox;

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
