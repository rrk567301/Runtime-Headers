@class NSString;

@interface ATXMPBBlendingLayoutSelectionTracker : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (readonly, nonatomic) char hasHighestConfidenceCategory;
@property (retain, nonatomic) NSString *highestConfidenceCategory;
@property (readonly, nonatomic) char hasHighestRankingClientModelId;
@property (retain, nonatomic) NSString *highestRankingClientModelId;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) char hasExecuableTypeOfHighestRankingSuggestion;
@property (retain, nonatomic) NSString *execuableTypeOfHighestRankingSuggestion;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasHighestRankingClientModelABGroup;
@property (retain, nonatomic) NSString *highestRankingClientModelABGroup;

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

@end
