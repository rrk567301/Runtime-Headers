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
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteInconsistencyCondition;
- (void)deleteInconsistencyTrigger;

@end
