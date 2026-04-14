@class NSData, SISchemaUUID;

@interface DUSchemaDUSearchSessionRecord : SISchemaInstrumentationMessage {
    struct { unsigned char sessionStartTimestampMs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) unsigned long long sessionStartTimestampMs;
@property (nonatomic) BOOL hasSessionStartTimestampMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteSessionId;
- (void)deleteSessionStartTimestampMs;

@end
