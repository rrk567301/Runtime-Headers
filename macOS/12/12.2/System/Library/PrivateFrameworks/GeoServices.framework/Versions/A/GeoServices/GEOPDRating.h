@class NSMutableArray, PBUnknownFields;

@interface GEOPDRating : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_appleRatingCategorys;
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct { unsigned char has_maxScore : 1; unsigned char has_score : 1; unsigned char has_numRatingsUsedForScore : 1; unsigned char has_ratingType : 1; } _flags;
}

+ (id)ratingListForPlaceData:(id)a0 type:(int)a1;
+ (id)ratingForPlaceData:(id)a0 type:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)displayTitle;
- (id)jsonRepresentation;

@end
