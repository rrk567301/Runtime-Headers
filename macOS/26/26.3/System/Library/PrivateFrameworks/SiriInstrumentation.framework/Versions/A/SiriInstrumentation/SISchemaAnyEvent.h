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
- (id)initWithJSON:(id)a0;
- (Class)topLevelUnionTypeClass;
- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (BOOL)readFrom:(id)a0;
- (void)deleteAnyEventType;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)unwrap;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void)deletePayload;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;

@end
