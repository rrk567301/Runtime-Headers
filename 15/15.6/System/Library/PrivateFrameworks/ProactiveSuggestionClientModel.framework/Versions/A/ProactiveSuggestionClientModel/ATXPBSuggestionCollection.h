@class NSString, NSMutableArray;

@interface ATXPBSuggestionCollection : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasContextTitle;
@property (retain, nonatomic) NSString *contextTitle;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) char hasSectionIdentifier;
@property (retain, nonatomic) NSString *sectionIdentifier;

+ (Class)suggestionsType;

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
- (void)addSuggestions:(id)a0;
- (void)clearSuggestions;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;

@end
