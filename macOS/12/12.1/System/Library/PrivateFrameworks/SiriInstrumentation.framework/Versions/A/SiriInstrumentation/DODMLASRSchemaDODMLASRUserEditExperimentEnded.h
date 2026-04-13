@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *redecodingResults;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addRedecodingResults:(id)a0;
- (void)clearRedecodingResults;
- (unsigned long long)redecodingResultsCount;
- (id)redecodingResultsAtIndex:(unsigned long long)a0;

@end
