@class NSData, GRPSchemaSiriEventTypeUnion;

@interface GRPSchemaOrderedMessage : SISchemaInstrumentationMessage {
    struct { unsigned char logicalEventTimestampInNs : 1; } _has;
}

@property (nonatomic) long long logicalEventTimestampInNs;
@property (nonatomic) char hasLogicalEventTimestampInNs;
@property (retain, nonatomic) GRPSchemaSiriEventTypeUnion *siriEventTypeUnion;
@property (nonatomic) char hasSiriEventTypeUnion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLogicalEventTimestampInNs;
- (void)deleteSiriEventTypeUnion;
- (id)suppressMessageUnderConditions;

@end
