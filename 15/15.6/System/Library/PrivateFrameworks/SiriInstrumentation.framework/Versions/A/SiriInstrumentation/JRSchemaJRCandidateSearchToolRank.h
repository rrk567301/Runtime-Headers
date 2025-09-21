@class NSArray, NSData;

@interface JRSchemaJRCandidateSearchToolRank : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *searchToolRanks;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSearchToolRank:(int)a0;
- (void)clearSearchToolRank;
- (void)deleteSearchToolRank;
- (int)searchToolRankAtIndex:(unsigned long long)a0;
- (unsigned long long)searchToolRankCount;
- (id)suppressMessageUnderConditions;

@end
