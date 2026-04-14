@class NSString, NSMutableArray;

@interface ATXPBBlendingSessionClientModelUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasClientModelVersion;
@property (retain, nonatomic) NSString *clientModelVersion;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionType;

- (void)clearSuggestions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)suggestionsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addSuggestion:(id)a0;
- (id)suggestionAtIndex:(unsigned long long)a0;

@end
