@class NSArray, NSData;

@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isAfterResume : 1; } _has;
}

@property (copy, nonatomic) NSArray *tokenSilenceStartTimeInNsLists;
@property (copy, nonatomic) NSArray *correctPartialResultIndexLists;
@property (nonatomic) BOOL isAfterResume;
@property (nonatomic) BOOL hasIsAfterResume;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)clearTokenSilenceStartTimeInNsList;
- (void)deleteTokenSilenceStartTimeInNsList;
- (void)addTokenSilenceStartTimeInNsList:(unsigned long long)a0;
- (unsigned long long)tokenSilenceStartTimeInNsListCount;
- (unsigned long long)tokenSilenceStartTimeInNsListAtIndex:(unsigned long long)a0;
- (void)clearCorrectPartialResultIndexList;
- (void)deleteCorrectPartialResultIndexList;
- (void)addCorrectPartialResultIndexList:(int)a0;
- (unsigned long long)correctPartialResultIndexListCount;
- (int)correctPartialResultIndexListAtIndex:(unsigned long long)a0;
- (void)deleteIsAfterResume;

@end
