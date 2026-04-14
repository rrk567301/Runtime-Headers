@class NSArray, NSData;

@interface JRSchemaJRCandidateSearchToolRank : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *searchToolRanks;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSearchToolRank:(int)a0;
- (void)clearSearchToolRank;
- (void)deleteSearchToolRank;
- (int)searchToolRankAtIndex:(unsigned long long)a0;
- (unsigned long long)searchToolRankCount;

@end
