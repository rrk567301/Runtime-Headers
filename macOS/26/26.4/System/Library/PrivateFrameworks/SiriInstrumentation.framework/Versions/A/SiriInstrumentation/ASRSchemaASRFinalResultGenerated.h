@class NSArray, NSData;

@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isAfterResume : 1; } _has;
}

@property (copy, nonatomic) NSArray *tokenSilenceStartTimeInNsLists;
@property (copy, nonatomic) NSArray *correctPartialResultIndexLists;
@property (nonatomic) BOOL isAfterResume;
@property (nonatomic) BOOL hasIsAfterResume;
@property (copy, nonatomic) NSArray *correctAlignedPartialResultIndexLists;
@property (copy, nonatomic) NSArray *correctAlignedUnfilteredPartialResultIndexLists;
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
- (void)addCorrectAlignedPartialResultIndexList:(int)a0;
- (void)addCorrectAlignedUnfilteredPartialResultIndexList:(int)a0;
- (void)addCorrectPartialResultIndexList:(int)a0;
- (void)addTokenSilenceStartTimeInNsList:(unsigned long long)a0;
- (void)clearCorrectAlignedPartialResultIndexList;
- (void)clearCorrectAlignedUnfilteredPartialResultIndexList;
- (void)clearCorrectPartialResultIndexList;
- (void)clearTokenSilenceStartTimeInNsList;
- (int)correctAlignedPartialResultIndexListAtIndex:(unsigned long long)a0;
- (unsigned long long)correctAlignedPartialResultIndexListCount;
- (int)correctAlignedUnfilteredPartialResultIndexListAtIndex:(unsigned long long)a0;
- (unsigned long long)correctAlignedUnfilteredPartialResultIndexListCount;
- (int)correctPartialResultIndexListAtIndex:(unsigned long long)a0;
- (unsigned long long)correctPartialResultIndexListCount;
- (void)deleteCorrectAlignedPartialResultIndexList;
- (void)deleteCorrectAlignedUnfilteredPartialResultIndexList;
- (void)deleteCorrectPartialResultIndexList;
- (void)deleteIsAfterResume;
- (void)deleteTokenSilenceStartTimeInNsList;
- (unsigned long long)tokenSilenceStartTimeInNsListAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenSilenceStartTimeInNsListCount;

@end
