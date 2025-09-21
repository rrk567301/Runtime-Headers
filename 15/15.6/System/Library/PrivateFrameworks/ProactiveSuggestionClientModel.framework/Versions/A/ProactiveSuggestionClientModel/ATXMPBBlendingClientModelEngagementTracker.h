@class NSString;

@interface ATXMPBBlendingClientModelEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char clientModelCacheAge : 1; unsigned char consumerSubTypeCacheAge : 1; unsigned char engagementType : 1; unsigned char numSuggestionsForClientModelInLayout : 1; unsigned char positionInClientModelCacheOfEngagedSuggestion : 1; } _has;
}

@property (readonly, nonatomic) char hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) char hasNumSuggestionsForClientModelInLayout;
@property (nonatomic) unsigned int numSuggestionsForClientModelInLayout;
@property (nonatomic) char hasPositionInClientModelCacheOfEngagedSuggestion;
@property (nonatomic) unsigned int positionInClientModelCacheOfEngagedSuggestion;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) char hasEngagementType;
@property (nonatomic) int engagementType;
@property (nonatomic) char hasConsumerSubTypeCacheAge;
@property (nonatomic) unsigned int consumerSubTypeCacheAge;
@property (nonatomic) char hasClientModelCacheAge;
@property (nonatomic) unsigned int clientModelCacheAge;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

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
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;

@end
