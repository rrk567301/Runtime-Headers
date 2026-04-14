@class NSData;

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)unwrap;
- (void)writeTo:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (void)deletePayload;
- (BOOL)readFrom:(id)a0;
- (Class)topLevelUnionTypeClass;
- (void)deleteAnyEventType;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
