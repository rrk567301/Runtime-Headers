@class NSString, NSMutableArray;

@interface CAXPBSuggestion : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *suggestedActions;
@property (readonly, nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) NSString *modelVersion;

+ (Class)suggestedActionsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSuggestedActions;
- (void)addSuggestedActions:(id)a0;
- (unsigned long long)suggestedActionsCount;
- (id)suggestedActionsAtIndex:(unsigned long long)a0;

@end
