@interface NTPBNotificationPoolIndexEntry : PBCodable <NSCopying> {
    struct { unsigned char itemLength : 1; unsigned char itemOffset : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) char hasItemOffset;
@property (nonatomic) unsigned long long itemOffset;
@property (nonatomic) char hasItemLength;
@property (nonatomic) unsigned long long itemLength;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
