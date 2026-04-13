@interface SISchemaInstrumentationMessage : PBCodable

- (id)qualifiedMessageName;
- (id)formattedJsonBody;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;

@end
