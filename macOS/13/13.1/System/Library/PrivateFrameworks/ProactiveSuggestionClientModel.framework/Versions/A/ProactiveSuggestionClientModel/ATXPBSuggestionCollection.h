@class NSString, NSMutableArray;

@interface ATXPBSuggestionCollection : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContextTitle;
@property (retain, nonatomic) NSString *contextTitle;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) BOOL hasSectionIdentifier;
@property (retain, nonatomic) NSString *sectionIdentifier;

+ (Class)suggestionsType;

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
- (void)clearSuggestions;
- (void)addSuggestions:(id)a0;
- (unsigned long long)suggestionsCount;
- (id)suggestionsAtIndex:(unsigned long long)a0;

@end
