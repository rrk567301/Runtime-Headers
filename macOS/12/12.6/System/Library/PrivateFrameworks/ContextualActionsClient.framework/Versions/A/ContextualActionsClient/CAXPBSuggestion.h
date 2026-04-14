@class NSString, NSMutableArray;

@interface CAXPBSuggestion : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *suggestedActions;
@property (readonly, nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) NSString *modelVersion;

+ (Class)suggestedActionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addSuggestedActions:(id)a0;
- (unsigned long long)suggestedActionsCount;
- (void)clearSuggestedActions;
- (id)suggestedActionsAtIndex:(unsigned long long)a0;

@end
