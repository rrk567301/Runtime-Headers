@class PBUnknownFields;

@interface GEOCommonOptions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _excludeGuidance;
    char _includeSnapScoreMetadataDebug;
    char _includeSummaryForPredictedDestination;
    char _includeTravelTimeAggressive;
    char _includeTravelTimeConservative;
    char _includeTravelTimeEstimate;
    char _supportsArMode;
    struct { unsigned char has_excludeGuidance : 1; unsigned char has_includeSnapScoreMetadataDebug : 1; unsigned char has_includeSummaryForPredictedDestination : 1; unsigned char has_includeTravelTimeAggressive : 1; unsigned char has_includeTravelTimeConservative : 1; unsigned char has_includeTravelTimeEstimate : 1; unsigned char has_supportsArMode : 1; } _flags;
}

@property (nonatomic) char hasIncludeTravelTimeAggressive;
@property (nonatomic) char includeTravelTimeAggressive;
@property (nonatomic) char hasIncludeTravelTimeEstimate;
@property (nonatomic) char includeTravelTimeEstimate;
@property (nonatomic) char hasIncludeTravelTimeConservative;
@property (nonatomic) char includeTravelTimeConservative;
@property (nonatomic) char hasExcludeGuidance;
@property (nonatomic) char excludeGuidance;
@property (nonatomic) char hasIncludeSummaryForPredictedDestination;
@property (nonatomic) char includeSummaryForPredictedDestination;
@property (nonatomic) char hasIncludeSnapScoreMetadataDebug;
@property (nonatomic) char includeSnapScoreMetadataDebug;
@property (nonatomic) char hasSupportsArMode;
@property (nonatomic) char supportsArMode;
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
