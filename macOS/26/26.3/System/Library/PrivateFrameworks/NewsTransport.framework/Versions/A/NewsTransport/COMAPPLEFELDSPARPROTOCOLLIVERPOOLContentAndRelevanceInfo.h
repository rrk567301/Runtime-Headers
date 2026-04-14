@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo : PBCodable <NSCopying> {
    struct { unsigned char contentRating : 1; unsigned char relevanceRating : 1; } _has;
}

@property (nonatomic) BOOL hasContentRating;
@property (nonatomic) int contentRating;
@property (nonatomic) BOOL hasRelevanceRating;
@property (nonatomic) int relevanceRating;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsContentRating:(id)a0;
- (id)contentRatingAsString:(int)a0;
- (int)StringAsRelevanceRating:(id)a0;
- (id)relevanceRatingAsString:(int)a0;

@end
