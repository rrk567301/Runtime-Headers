@class NSArray, NSData;

@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isAfterResume : 1; } _has;
}

@property (copy, nonatomic) NSArray *tokenSilenceStartTimeInNsLists;
@property (copy, nonatomic) NSArray *correctPartialResultIndexLists;
@property (nonatomic) BOOL isAfterResume;
@property (nonatomic) BOOL hasIsAfterResume;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCorrectPartialResultIndexList:(int)a0;
- (void)addTokenSilenceStartTimeInNsList:(unsigned long long)a0;
- (void)clearCorrectPartialResultIndexList;
- (void)clearTokenSilenceStartTimeInNsList;
- (int)correctPartialResultIndexListAtIndex:(unsigned long long)a0;
- (unsigned long long)correctPartialResultIndexListCount;
- (void)deleteCorrectPartialResultIndexList;
- (void)deleteIsAfterResume;
- (void)deleteTokenSilenceStartTimeInNsList;
- (id)suppressMessageUnderConditions;
- (unsigned long long)tokenSilenceStartTimeInNsListAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenSilenceStartTimeInNsListCount;

@end
