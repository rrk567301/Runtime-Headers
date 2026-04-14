@class NSData, SISchemaUUID;

@interface SISchemaLogicalTimestamp : SISchemaInstrumentationMessage {
    struct { unsigned char timestampInNanoseconds : 1; } _has;
}

@property (nonatomic) long long timestampInNanoseconds;
@property (nonatomic) BOOL hasTimestampInNanoseconds;
@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
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
- (void)deleteClockIdentifier;
- (void)deleteTimestampInNanoseconds;

@end
