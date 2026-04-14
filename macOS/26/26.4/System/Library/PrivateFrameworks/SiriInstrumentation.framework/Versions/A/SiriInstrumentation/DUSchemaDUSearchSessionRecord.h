@class NSData, SISchemaUUID;

@interface DUSchemaDUSearchSessionRecord : SISchemaInstrumentationMessage {
    struct { unsigned char sessionStartTimestampMs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) unsigned long long sessionStartTimestampMs;
@property (nonatomic) BOOL hasSessionStartTimestampMs;
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
- (void)deleteSessionId;
- (void)deleteSessionStartTimestampMs;

@end
