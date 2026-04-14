@class NSString, NSMutableArray;

@interface ATXPBSuggestionCollection : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContextTitle;
@property (retain, nonatomic) NSString *contextTitle;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) BOOL hasSectionIdentifier;
@property (retain, nonatomic) NSString *sectionIdentifier;

+ (Class)suggestionsType;

- (void)clearSuggestions;
- (void)addSuggestions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)suggestionsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
