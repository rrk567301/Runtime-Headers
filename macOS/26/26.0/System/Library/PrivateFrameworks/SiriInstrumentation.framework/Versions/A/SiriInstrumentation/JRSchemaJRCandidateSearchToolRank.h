@class NSArray, NSData;

@interface JRSchemaJRCandidateSearchToolRank : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *searchToolRanks;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addSearchToolRank:(int)a0;
- (void)clearSearchToolRank;
- (void)deleteSearchToolRank;
- (int)searchToolRankAtIndex:(unsigned long long)a0;
- (unsigned long long)searchToolRankCount;

@end
