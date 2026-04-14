@class SISchemaCommonEventMetadata, NSData, SISchemaAnyEvent;

@interface SessionSchemaOrderedSessionEvent : SISchemaInstrumentationMessage {
    struct { unsigned char logicalEventTimestampInNs : 1; } _has;
}

@property (nonatomic) long long logicalEventTimestampInNs;
@property (nonatomic) BOOL hasLogicalEventTimestampInNs;
@property (retain, nonatomic) SISchemaAnyEvent *event;
@property (nonatomic) BOOL hasEvent;
@property (retain, nonatomic) SISchemaCommonEventMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEvent;
- (void)deleteLogicalEventTimestampInNs;
- (void)deleteMetadata;

@end
