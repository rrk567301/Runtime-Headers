@class NSData;

@interface OPTINSchemaOPTINInconsistentStateDetected : SISchemaInstrumentationMessage {
    struct { unsigned char inconsistencyCondition : 1; unsigned char inconsistencyTrigger : 1; } _has;
}

@property (nonatomic) int inconsistencyCondition;
@property (nonatomic) BOOL hasInconsistencyCondition;
@property (nonatomic) int inconsistencyTrigger;
@property (nonatomic) BOOL hasInconsistencyTrigger;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteInconsistencyCondition;
- (void)deleteInconsistencyTrigger;

@end
