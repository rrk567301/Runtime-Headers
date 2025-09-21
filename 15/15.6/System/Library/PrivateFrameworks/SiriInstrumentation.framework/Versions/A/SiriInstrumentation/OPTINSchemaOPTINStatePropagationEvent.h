@class NSData, SISchemaUUID;

@interface OPTINSchemaOPTINStatePropagationEvent : SISchemaTopLevelUnionType {
    struct { unsigned char optInState : 1; unsigned char propagationState : 1; } _has;
}

@property (nonatomic) int optInState;
@property (nonatomic) char hasOptInState;
@property (nonatomic) int propagationState;
@property (nonatomic) char hasPropagationState;
@property (retain, nonatomic) SISchemaUUID *hashedHomeKitAccessoryId;
@property (nonatomic) char hasHashedHomeKitAccessoryId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteHashedHomeKitAccessoryId;
- (void)deleteOptInState;
- (void)deletePropagationState;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
