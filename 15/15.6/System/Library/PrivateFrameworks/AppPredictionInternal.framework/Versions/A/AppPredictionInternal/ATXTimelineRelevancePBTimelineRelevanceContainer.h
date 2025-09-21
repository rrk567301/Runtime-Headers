@class NSString, NSMutableArray, ATXTimelineRelevancePBFeatureVector;

@interface ATXTimelineRelevancePBTimelineRelevanceContainer : PBCodable <NSCopying> {
    struct { unsigned char timelineDonationNilCount : 1; unsigned char timestamp : 1; unsigned char atLeastOnePositiveTimelineRelevanceScore : 1; } _has;
}

@property (retain, nonatomic) NSString *widgetBundleId;
@property (retain, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) char hasContainerBundleIdentifier;
@property (retain, nonatomic) NSString *containerBundleIdentifier;
@property (nonatomic) int widgetFamily;
@property (nonatomic) char hasTimelineDonationNilCount;
@property (nonatomic) long long timelineDonationNilCount;
@property (nonatomic) char hasAtLeastOnePositiveTimelineRelevanceScore;
@property (nonatomic) char atLeastOnePositiveTimelineRelevanceScore;
@property (retain, nonatomic) NSMutableArray *timelineRelevanceScores;
@property (retain, nonatomic) NSMutableArray *timelineRelevanceSuggestions;
@property (retain, nonatomic) NSMutableArray *rotations;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSMutableArray *stackConfigSummarys;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasFeatureVector;
@property (retain, nonatomic) ATXTimelineRelevancePBFeatureVector *featureVector;

+ (Class)timelineRelevanceSuggestionType;
+ (Class)rotationType;
+ (Class)stackConfigSummaryType;
+ (Class)timelineRelevanceScoreType;

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
- (int)StringAsWidgetFamily:(id)a0;
- (void)addTimelineRelevanceSuggestion:(id)a0;
- (void)addRotation:(id)a0;
- (void)addStackConfigSummary:(id)a0;
- (void)addTimelineRelevanceScore:(id)a0;
- (void)clearRotations;
- (void)clearStackConfigSummarys;
- (void)clearTimelineRelevanceScores;
- (void)clearTimelineRelevanceSuggestions;
- (id)rotationAtIndex:(unsigned long long)a0;
- (unsigned long long)rotationsCount;
- (id)stackConfigSummaryAtIndex:(unsigned long long)a0;
- (unsigned long long)stackConfigSummarysCount;
- (id)timelineRelevanceScoreAtIndex:(unsigned long long)a0;
- (unsigned long long)timelineRelevanceScoresCount;
- (id)timelineRelevanceSuggestionAtIndex:(unsigned long long)a0;
- (unsigned long long)timelineRelevanceSuggestionsCount;
- (id)widgetFamilyAsString:(int)a0;

@end
