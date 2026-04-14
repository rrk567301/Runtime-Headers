@interface NTPBNotificationPoolIndexEntry : PBCodable <NSCopying> {
    struct { unsigned char itemLength : 1; unsigned char itemOffset : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) BOOL hasItemOffset;
@property (nonatomic) unsigned long long itemOffset;
@property (nonatomic) BOOL hasItemLength;
@property (nonatomic) unsigned long long itemLength;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
