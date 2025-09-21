@class NSData;

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (void)deleteAnyEventType;
- (id)suppressMessageUnderConditions;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (id)dictionaryRepresentation;
- (Class)topLevelUnionTypeClass;
- (id)unwrap;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)deletePayload;
- (BOOL)isEqual:(id)a0;
- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (void).cxx_destruct;

@end
