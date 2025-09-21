@interface NTPBContentAndRelevanceInfo : PBCodable <NSCopying> {
    struct { unsigned char contentRating : 1; unsigned char relevanceRating : 1; } _has;
}

@property (nonatomic) char hasContentRating;
@property (nonatomic) int contentRating;
@property (nonatomic) char hasRelevanceRating;
@property (nonatomic) int relevanceRating;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
