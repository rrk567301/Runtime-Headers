@class SISchemaAnyEvent, NSData, SISchemaCommonEventMetadata;

@interface SISchemaOrderedAnyEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaCommonEventMetadata *metadata;
@property (nonatomic) char hasMetadata;
@property (retain, nonatomic) SISchemaAnyEvent *event;
@property (nonatomic) char hasEvent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEvent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteMetadata;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;

@end
