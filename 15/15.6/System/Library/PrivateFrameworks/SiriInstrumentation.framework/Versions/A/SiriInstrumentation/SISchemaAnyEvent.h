@class NSData;

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) char hasAnyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) char hasPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAnyEventType;
- (void)deletePayload;
- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (id)suppressMessageUnderConditions;
- (Class)topLevelUnionTypeClass;
- (id)unwrap;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;

@end
