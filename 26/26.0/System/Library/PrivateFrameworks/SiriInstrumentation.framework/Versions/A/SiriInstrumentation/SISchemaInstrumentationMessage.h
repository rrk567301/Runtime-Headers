@interface SISchemaInstrumentationMessage : PBCodable

- (id)suppressMessageUnderConditions;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)_pruneSuppressedMessagesFromArray:(id)a0 underConditions:(id)a1;
- (id)formattedJsonBody;
- (BOOL)shouldSuppressMessageUnderConditions:(id)a0;

@end
