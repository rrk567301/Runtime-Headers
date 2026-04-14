@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSVideoInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char interactionType : 1; unsigned char clientInteractionVideoVerb : 1; } _has;
}

@property (nonatomic) int interactionType;
@property (nonatomic) BOOL hasInteractionType;
@property (copy, nonatomic) NSString *clientComponentName;
@property (nonatomic) BOOL hasClientComponentName;
@property (copy, nonatomic) NSString *dialogId;
@property (nonatomic) BOOL hasDialogId;
@property (nonatomic) int clientInteractionVideoVerb;
@property (nonatomic) BOOL hasClientInteractionVideoVerb;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteClientComponentName;
- (void)deleteClientInteractionVideoVerb;
- (void)deleteDialogId;
- (void)deleteInteractionType;

@end
