@class SIRINLUEXTERNALRRBoundingBox, NSMutableArray;

@interface SIRINLUEXTERNALRRMetadata : PBCodable <NSCopying> {
    struct { unsigned char dataSource : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox;
@property (retain, nonatomic) NSMutableArray *surroundingTexts;
@property (nonatomic) BOOL hasDataSource;
@property (nonatomic) int dataSource;

+ (Class)surroundingTextsType;

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
- (int)StringAsDataSource:(id)a0;
- (void)addSurroundingTexts:(id)a0;
- (void)clearSurroundingTexts;
- (id)dataSourceAsString:(int)a0;
- (id)surroundingTextsAtIndex:(unsigned long long)a0;
- (unsigned long long)surroundingTextsCount;

@end
