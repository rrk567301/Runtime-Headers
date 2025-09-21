@class NSData;

@interface OPTINSchemaOPTINInconsistentStateDetected : SISchemaInstrumentationMessage {
    struct { unsigned char inconsistencyCondition : 1; unsigned char inconsistencyTrigger : 1; } _has;
}

@property (nonatomic) int inconsistencyCondition;
@property (nonatomic) char hasInconsistencyCondition;
@property (nonatomic) int inconsistencyTrigger;
@property (nonatomic) char hasInconsistencyTrigger;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInconsistencyCondition;
- (void)deleteInconsistencyTrigger;
- (id)suppressMessageUnderConditions;

@end
