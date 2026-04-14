@class SISchemaAnyEvent, NSData, SISchemaCommonEventMetadata;

@interface SISchemaOrderedAnyEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaCommonEventMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SISchemaAnyEvent *event;
@property (nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteEvent;
- (void)deleteMetadata;

@end
