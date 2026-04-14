@class NSData;

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)unwrap;
- (void)deleteAnyEventType;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deletePayload;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (void)writeTo:(id)a0;
- (Class)topLevelUnionTypeClass;
- (id)initWithJSON:(id)a0;

@end
