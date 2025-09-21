@class NSData;

@interface SRSTSchemaSRSTStateTransitionEvent : SISchemaInstrumentationMessage {
    struct { unsigned char currentState : 1; unsigned char previousState : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int currentState;
@property (nonatomic) char hasCurrentState;
@property (nonatomic) int previousState;
@property (nonatomic) char hasPreviousState;
@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteCurrentState;
- (void)deletePreviousState;
- (id)suppressMessageUnderConditions;

@end
