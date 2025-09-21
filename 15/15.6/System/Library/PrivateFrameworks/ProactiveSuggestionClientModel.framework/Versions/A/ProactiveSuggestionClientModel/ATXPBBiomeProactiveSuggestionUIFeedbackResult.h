@class NSString, NSMutableArray;

@interface ATXPBBiomeProactiveSuggestionUIFeedbackResult : PBCodable <NSCopying> {
    struct { unsigned char clientModelCacheCreationDate : 1; unsigned char sessionEndDate : 1; unsigned char sessionStartDate : 1; } _has;
}

@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) char hasBlendingUICacheUpdateUUID;
@property (retain, nonatomic) NSString *blendingUICacheUpdateUUID;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) char hasClientModelCacheCreationDate;
@property (nonatomic) double clientModelCacheCreationDate;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) char hasSessionStartDate;
@property (nonatomic) double sessionStartDate;
@property (nonatomic) char hasSessionEndDate;
@property (nonatomic) double sessionEndDate;
@property (retain, nonatomic) NSMutableArray *shownSuggestions;
@property (retain, nonatomic) NSMutableArray *engagedSuggestions;
@property (retain, nonatomic) NSMutableArray *rejectedSuggestions;

+ (Class)engagedSuggestionsType;
+ (Class)rejectedSuggestionsType;
+ (Class)shownSuggestionsType;

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
- (void)addEngagedSuggestions:(id)a0;
- (void)addRejectedSuggestions:(id)a0;
- (void)addShownSuggestions:(id)a0;
- (void)clearEngagedSuggestions;
- (void)clearRejectedSuggestions;
- (void)clearShownSuggestions;
- (id)engagedSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)engagedSuggestionsCount;
- (id)rejectedSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedSuggestionsCount;
- (id)shownSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)shownSuggestionsCount;

@end
