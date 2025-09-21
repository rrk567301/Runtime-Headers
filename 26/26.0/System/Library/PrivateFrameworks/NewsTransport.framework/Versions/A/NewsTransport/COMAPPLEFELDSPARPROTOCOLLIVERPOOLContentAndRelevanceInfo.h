@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo : PBCodable <NSCopying> {
    struct { unsigned char contentRating : 1; unsigned char relevanceRating : 1; } _has;
}

@property (nonatomic) BOOL hasContentRating;
@property (nonatomic) int contentRating;
@property (nonatomic) BOOL hasRelevanceRating;
@property (nonatomic) int relevanceRating;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsContentRating:(id)a0;
- (id)contentRatingAsString:(int)a0;
- (int)StringAsRelevanceRating:(id)a0;
- (id)relevanceRatingAsString:(int)a0;

@end
