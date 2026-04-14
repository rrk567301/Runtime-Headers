@class NSData, SISchemaUUID;

@interface GRRSchemaGRRSource : SISchemaInstrumentationMessage {
    struct { unsigned char sourceType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sourceId;
@property (nonatomic) BOOL hasSourceId;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasSourceType;
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
- (void)deleteSourceId;
- (void)deleteSourceType;

@end
