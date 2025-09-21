@class NSString;

@interface ATXTimelineRelevancePBTimelineRelevanceScoreEntry : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char relevanceScore : 1; unsigned char timestamp : 1; unsigned char suggestionMappingReason : 1; } _has;
}

@property (nonatomic) char hasRelevanceScore;
@property (nonatomic) double relevanceScore;
@property (nonatomic) char hasDuration;
@property (nonatomic) long long duration;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) long long timestamp;
@property (readonly, nonatomic) char hasSuggestionID;
@property (retain, nonatomic) NSString *suggestionID;
@property (nonatomic) char hasSuggestionMappingReason;
@property (nonatomic) int suggestionMappingReason;

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
- (int)StringAsSuggestionMappingReason:(id)a0;
- (id)suggestionMappingReasonAsString:(int)a0;

@end
