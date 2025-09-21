@class SISchemaUIStatePresenting, SISchemaUIStateDismissed, NSData;

@interface SISchemaUIStateTransition : SISchemaInstrumentationMessage {
    struct { unsigned char currentState : 1; unsigned char previousState : 1; unsigned char siriPresentationType : 1; unsigned char dismissalReason : 1; } _has;
}

@property (nonatomic) int currentState;
@property (nonatomic) char hasCurrentState;
@property (nonatomic) int previousState;
@property (nonatomic) char hasPreviousState;
@property (nonatomic) int siriPresentationType;
@property (nonatomic) char hasSiriPresentationType;
@property (nonatomic) int dismissalReason;
@property (nonatomic) char hasDismissalReason;
@property (retain, nonatomic) SISchemaUIStatePresenting *presenting;
@property (nonatomic) char hasPresenting;
@property (retain, nonatomic) SISchemaUIStateDismissed *dismissed;
@property (nonatomic) char hasDismissed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPresentationstate;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDismissed;
- (void)deleteCurrentState;
- (void)deleteDismissalReason;
- (void)deletePresenting;
- (void)deletePreviousState;
- (void)deleteSiriPresentationType;
- (id)suppressMessageUnderConditions;

@end
