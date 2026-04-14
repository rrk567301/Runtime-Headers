@class NSString;

@interface ATXTimelineRelevancePBTimelineRelevanceScoreEntry : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char relevanceScore : 1; unsigned char timestamp : 1; unsigned char suggestionMappingReason : 1; } _has;
}

@property (nonatomic) BOOL hasRelevanceScore;
@property (nonatomic) double relevanceScore;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (readonly, nonatomic) BOOL hasSuggestionID;
@property (retain, nonatomic) NSString *suggestionID;
@property (nonatomic) BOOL hasSuggestionMappingReason;
@property (nonatomic) int suggestionMappingReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsSuggestionMappingReason:(id)a0;
- (id)suggestionMappingReasonAsString:(int)a0;

@end
