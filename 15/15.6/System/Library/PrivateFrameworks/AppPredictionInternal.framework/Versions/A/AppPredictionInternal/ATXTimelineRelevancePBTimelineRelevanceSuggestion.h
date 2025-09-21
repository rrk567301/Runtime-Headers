@class NSString, NSMutableArray;

@interface ATXTimelineRelevancePBTimelineRelevanceSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSuggestionID;
@property (retain, nonatomic) NSString *suggestionID;
@property (retain, nonatomic) NSMutableArray *abuseControlOutcomes;
@property (retain, nonatomic) NSMutableArray *timelineRelevanceScoreEntrys;

+ (Class)timelineRelevanceScoreEntryType;
+ (Class)abuseControlOutcomeType;

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
- (void)addTimelineRelevanceScoreEntry:(id)a0;
- (id)abuseControlOutcomeAtIndex:(unsigned long long)a0;
- (unsigned long long)abuseControlOutcomesCount;
- (void)addAbuseControlOutcome:(id)a0;
- (void)clearAbuseControlOutcomes;
- (void)clearTimelineRelevanceScoreEntrys;
- (id)timelineRelevanceScoreEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)timelineRelevanceScoreEntrysCount;

@end
