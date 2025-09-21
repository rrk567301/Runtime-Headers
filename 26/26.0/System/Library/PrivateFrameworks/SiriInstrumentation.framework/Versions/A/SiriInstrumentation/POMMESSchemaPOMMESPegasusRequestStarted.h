@class NSData;

@interface POMMESSchemaPOMMESPegasusRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char payloadSizeInKB : 1; } _has;
}

@property (nonatomic) double payloadSizeInKB;
@property (nonatomic) BOOL hasPayloadSizeInKB;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deletePayloadSizeInKB;

@end
