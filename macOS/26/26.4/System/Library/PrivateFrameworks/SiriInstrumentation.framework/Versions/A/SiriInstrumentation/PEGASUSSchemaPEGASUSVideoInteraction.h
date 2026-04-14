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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClientComponentName;
- (void)deleteClientInteractionVideoVerb;
- (void)deleteDialogId;
- (void)deleteInteractionType;

@end
