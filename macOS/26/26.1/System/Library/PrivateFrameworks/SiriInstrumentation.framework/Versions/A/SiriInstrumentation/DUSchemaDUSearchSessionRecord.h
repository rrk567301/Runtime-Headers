@class NSData, SISchemaUUID;

@interface DUSchemaDUSearchSessionRecord : SISchemaInstrumentationMessage {
    struct { unsigned char sessionStartTimestampMs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) unsigned long long sessionStartTimestampMs;
@property (nonatomic) BOOL hasSessionStartTimestampMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteSessionId;
- (void)deleteSessionStartTimestampMs;

@end
