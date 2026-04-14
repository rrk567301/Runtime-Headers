@class NSArray, NSData;

@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokenSilenceStartTimeInNsLists;
@property (copy, nonatomic) NSArray *correctPartialResultIndexLists;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearTokenSilenceStartTimeInNsList;
- (void)clearCorrectPartialResultIndexList;
- (void)addTokenSilenceStartTimeInNsList:(unsigned long long)a0;
- (void)addCorrectPartialResultIndexList:(int)a0;
- (void)deleteTokenSilenceStartTimeInNsList;
- (unsigned long long)tokenSilenceStartTimeInNsListCount;
- (unsigned long long)tokenSilenceStartTimeInNsListAtIndex:(unsigned long long)a0;
- (void)deleteCorrectPartialResultIndexList;
- (unsigned long long)correctPartialResultIndexListCount;
- (int)correctPartialResultIndexListAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
