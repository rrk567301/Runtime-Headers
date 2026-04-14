@class NSString, NSMutableArray;

@interface ATXPBBlendingSessionClientModelUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasClientModelVersion;
@property (retain, nonatomic) NSString *clientModelVersion;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)suggestionsCount;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (void)clearSuggestions;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addSuggestion:(id)a0;
- (id)suggestionAtIndex:(unsigned long long)a0;

@end
