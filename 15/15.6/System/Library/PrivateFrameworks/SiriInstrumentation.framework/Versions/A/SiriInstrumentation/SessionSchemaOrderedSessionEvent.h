@class SISchemaCommonEventMetadata, NSData, SISchemaAnyEvent;

@interface SessionSchemaOrderedSessionEvent : SISchemaInstrumentationMessage {
    struct { unsigned char logicalEventTimestampInNs : 1; } _has;
}

@property (nonatomic) long long logicalEventTimestampInNs;
@property (nonatomic) char hasLogicalEventTimestampInNs;
@property (retain, nonatomic) SISchemaAnyEvent *event;
@property (nonatomic) char hasEvent;
@property (retain, nonatomic) SISchemaCommonEventMetadata *metadata;
@property (nonatomic) char hasMetadata;
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
- (void)deleteLogicalEventTimestampInNs;
- (void)deleteMetadata;
- (id)suppressMessageUnderConditions;

@end
