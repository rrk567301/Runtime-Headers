@interface ATXPBProactiveSuggestionGroupedUIFeedbackResult : PBCodable <NSCopying> {
    struct { unsigned char endDateOfLastSessionInSeconds : 1; unsigned char numAbandonedSuggestions : 1; unsigned char numEngagedSuggestions : 1; unsigned char numRejectedSuggestions : 1; unsigned char numSessionsWithAbandonedSuggestions : 1; unsigned char numSessionsWithEngagedSuggestions : 1; unsigned char numSessionsWithRejectedSuggestions : 1; unsigned char startDateOfFirstSessionInSeconds : 1; unsigned char isComplete : 1; } _has;
}

@property (nonatomic) char hasNumSessionsWithEngagedSuggestions;
@property (nonatomic) unsigned long long numSessionsWithEngagedSuggestions;
@property (nonatomic) char hasNumSessionsWithRejectedSuggestions;
@property (nonatomic) unsigned long long numSessionsWithRejectedSuggestions;
@property (nonatomic) char hasNumSessionsWithAbandonedSuggestions;
@property (nonatomic) unsigned long long numSessionsWithAbandonedSuggestions;
@property (nonatomic) char hasNumEngagedSuggestions;
@property (nonatomic) unsigned long long numEngagedSuggestions;
@property (nonatomic) char hasNumRejectedSuggestions;
@property (nonatomic) unsigned long long numRejectedSuggestions;
@property (nonatomic) char hasNumAbandonedSuggestions;
@property (nonatomic) unsigned long long numAbandonedSuggestions;
@property (nonatomic) char hasIsComplete;
@property (nonatomic) char isComplete;
@property (nonatomic) char hasStartDateOfFirstSessionInSeconds;
@property (nonatomic) double startDateOfFirstSessionInSeconds;
@property (nonatomic) char hasEndDateOfLastSessionInSeconds;
@property (nonatomic) double endDateOfLastSessionInSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
