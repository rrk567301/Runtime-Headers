@interface SISchemaInstrumentationMessage : PBCodable

- (id)qualifiedMessageName;
- (id)formattedJsonBody;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)shouldSuppressMessageUnderConditions:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)_pruneSuppressedMessagesFromArray:(id)a0 underConditions:(id)a1;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;

@end
