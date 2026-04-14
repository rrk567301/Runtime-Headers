@class NSArray, NSData;

@interface CLPInstSchemaCLPCDMReplaySampleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isReplaySuccessful : 1; } _has;
}

@property (nonatomic) BOOL isReplaySuccessful;
@property (nonatomic) BOOL hasIsReplaySuccessful;
@property (copy, nonatomic) NSArray *comparatorResults;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addComparatorResults:(id)a0;
- (void)clearComparatorResults;
- (id)comparatorResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)comparatorResultsCount;
- (void)deleteComparatorResults;
- (void)deleteIsReplaySuccessful;

@end
