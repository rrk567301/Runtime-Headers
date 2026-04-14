@class NSData;

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)unwrap;
- (void)deletePayload;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (Class)topLevelUnionTypeClass;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)deleteAnyEventType;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
