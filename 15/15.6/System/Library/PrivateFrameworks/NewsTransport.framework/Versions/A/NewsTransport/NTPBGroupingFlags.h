@interface NTPBGroupingFlags : PBCodable <NSCopying> {
    struct { unsigned char isEligibleForGrouping : 1; unsigned char isEligibleForGroupingIfFavorited : 1; unsigned char isHidden : 1; } _has;
}

@property (nonatomic) char hasIsHidden;
@property (nonatomic) char isHidden;
@property (nonatomic) char hasIsEligibleForGrouping;
@property (nonatomic) char isEligibleForGrouping;
@property (nonatomic) char hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) char isEligibleForGroupingIfFavorited;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
