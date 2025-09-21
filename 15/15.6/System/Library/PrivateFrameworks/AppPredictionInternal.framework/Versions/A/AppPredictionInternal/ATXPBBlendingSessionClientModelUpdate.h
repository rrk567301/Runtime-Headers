@class NSString, NSMutableArray;

@interface ATXPBBlendingSessionClientModelUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) char hasClientModelVersion;
@property (retain, nonatomic) NSString *clientModelVersion;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionType;

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
- (void)clearSuggestions;
- (unsigned long long)suggestionsCount;
- (void)addSuggestion:(id)a0;
- (id)suggestionAtIndex:(unsigned long long)a0;

@end
