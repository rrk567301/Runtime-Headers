@class SIRINLUEXTERNALRRBoundingBox, NSMutableArray;

@interface SIRINLUEXTERNALRRMetadata : PBCodable <NSCopying> {
    struct { unsigned char dataSource : 1; } _has;
}

@property (readonly, nonatomic) char hasBoundingBox;
@property (retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox;
@property (retain, nonatomic) NSMutableArray *surroundingTexts;
@property (nonatomic) char hasDataSource;
@property (nonatomic) int dataSource;

+ (Class)surroundingTextsType;

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
- (int)StringAsDataSource:(id)a0;
- (void)addSurroundingTexts:(id)a0;
- (void)clearSurroundingTexts;
- (id)dataSourceAsString:(int)a0;
- (id)surroundingTextsAtIndex:(unsigned long long)a0;
- (unsigned long long)surroundingTextsCount;

@end
