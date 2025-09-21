@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSVideoInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char interactionType : 1; unsigned char clientInteractionVideoVerb : 1; } _has;
}

@property (nonatomic) int interactionType;
@property (nonatomic) char hasInteractionType;
@property (copy, nonatomic) NSString *clientComponentName;
@property (nonatomic) char hasClientComponentName;
@property (copy, nonatomic) NSString *dialogId;
@property (nonatomic) char hasDialogId;
@property (nonatomic) int clientInteractionVideoVerb;
@property (nonatomic) char hasClientInteractionVideoVerb;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClientComponentName;
- (void)deleteClientInteractionVideoVerb;
- (void)deleteDialogId;
- (void)deleteInteractionType;
- (id)suppressMessageUnderConditions;

@end
