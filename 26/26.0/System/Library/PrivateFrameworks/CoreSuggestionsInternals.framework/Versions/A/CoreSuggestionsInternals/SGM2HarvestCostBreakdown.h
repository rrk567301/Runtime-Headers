@class NSString;

@interface SGM2HarvestCostBreakdown : PBCodable <NSCopying> {
    struct { unsigned char documentSource : 1; unsigned char significantWork : 1; } _has;
}

@property (nonatomic) BOOL hasDocumentSource;
@property (nonatomic) int documentSource;
@property (readonly, nonatomic) BOOL hasComponentName;
@property (retain, nonatomic) NSString *componentName;
@property (nonatomic) BOOL hasSignificantWork;
@property (nonatomic) BOOL significantWork;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsDocumentSource:(id)a0;
- (id)documentSourceAsString:(int)a0;

@end
