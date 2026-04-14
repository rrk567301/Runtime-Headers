@class PBUnknownFields, NSMutableArray, PBDataReader;

@interface GEOPDRating : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_appleRatingCategorys;
    double _maxScore;
    NSMutableArray *_reviewSummarys;
    double _score;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct { unsigned char has_maxScore : 1; unsigned char has_score : 1; unsigned char has_numRatingsUsedForScore : 1; unsigned char has_ratingType : 1; unsigned char read_unknownFields : 1; unsigned char read_appleRatingCategorys : 1; unsigned char read_reviewSummarys : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)ratingForPlaceData:(id)a0 type:(int)a1;
+ (id)ratingListForPlaceData:(id)a0 type:(int)a1;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (id)displayTitle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
