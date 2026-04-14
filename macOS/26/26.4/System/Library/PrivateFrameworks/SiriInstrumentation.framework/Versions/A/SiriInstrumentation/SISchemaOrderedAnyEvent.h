@class SISchemaAnyEvent, NSData, SISchemaCommonEventMetadata;

@interface SISchemaOrderedAnyEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaCommonEventMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SISchemaAnyEvent *event;
@property (nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEvent;
- (void)deleteMetadata;

@end
