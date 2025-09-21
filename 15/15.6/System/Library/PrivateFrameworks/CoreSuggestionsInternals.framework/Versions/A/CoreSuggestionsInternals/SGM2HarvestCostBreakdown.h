@class NSString;

@interface SGM2HarvestCostBreakdown : PBCodable <NSCopying> {
    struct { unsigned char documentSource : 1; unsigned char significantWork : 1; } _has;
}

@property (nonatomic) char hasDocumentSource;
@property (nonatomic) int documentSource;
@property (readonly, nonatomic) char hasComponentName;
@property (retain, nonatomic) NSString *componentName;
@property (nonatomic) char hasSignificantWork;
@property (nonatomic) char significantWork;

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
- (int)StringAsDocumentSource:(id)a0;
- (id)documentSourceAsString:(int)a0;

@end
