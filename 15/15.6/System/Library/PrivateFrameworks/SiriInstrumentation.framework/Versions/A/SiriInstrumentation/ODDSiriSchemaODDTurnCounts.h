@class NSData;

@interface ODDSiriSchemaODDTurnCounts : SISchemaInstrumentationMessage {
    struct { unsigned char totalTurnCount : 1; unsigned char validTurnCount : 1; } _has;
}

@property (nonatomic) unsigned int totalTurnCount;
@property (nonatomic) char hasTotalTurnCount;
@property (nonatomic) unsigned int validTurnCount;
@property (nonatomic) char hasValidTurnCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTotalTurnCount;
- (void)deleteValidTurnCount;
- (id)suppressMessageUnderConditions;

@end
