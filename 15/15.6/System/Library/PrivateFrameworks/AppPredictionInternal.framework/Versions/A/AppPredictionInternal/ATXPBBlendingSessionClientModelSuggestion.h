@class NSString;

@interface ATXPBBlendingSessionClientModelSuggestion : PBCodable <NSCopying> {
    struct { unsigned char rawScore : 1; unsigned char suggestedConfidenceCategory : 1; } _has;
}

@property (readonly, nonatomic) char hasExecutableId;
@property (retain, nonatomic) NSString *executableId;
@property (nonatomic) char hasRawScore;
@property (nonatomic) double rawScore;
@property (nonatomic) char hasSuggestedConfidenceCategory;
@property (nonatomic) int suggestedConfidenceCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSuggestedConfidenceCategory:(id)a0;
- (id)suggestedConfidenceCategoryAsString:(int)a0;

@end
