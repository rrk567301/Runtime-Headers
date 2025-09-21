@class NSString, PBUnknownFields;

@interface GEOLogMsgStateARPRatingPhotoSubmission : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_originTarget;
    char _isFromMapsSuggesions;
    char _isFromRecommendationCard;
    char _isPlacecardInlineSubmission;
    struct { unsigned char has_isFromMapsSuggesions : 1; unsigned char has_isFromRecommendationCard : 1; unsigned char has_isPlacecardInlineSubmission : 1; } _flags;
}

@property (readonly, nonatomic) char hasOriginTarget;
@property (retain, nonatomic) NSString *originTarget;
@property (nonatomic) char hasIsFromRecommendationCard;
@property (nonatomic) char isFromRecommendationCard;
@property (nonatomic) char hasIsFromMapsSuggesions;
@property (nonatomic) char isFromMapsSuggesions;
@property (nonatomic) char hasIsPlacecardInlineSubmission;
@property (nonatomic) char isPlacecardInlineSubmission;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
