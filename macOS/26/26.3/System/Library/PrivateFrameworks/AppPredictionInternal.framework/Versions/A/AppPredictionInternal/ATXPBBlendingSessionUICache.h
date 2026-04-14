@class NSString, NSMutableArray;

@interface ATXPBBlendingSessionUICache : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionType;

- (void)clearSuggestions;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)suggestionsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addSuggestion:(id)a0;
- (id)suggestionAtIndex:(unsigned long long)a0;

@end
