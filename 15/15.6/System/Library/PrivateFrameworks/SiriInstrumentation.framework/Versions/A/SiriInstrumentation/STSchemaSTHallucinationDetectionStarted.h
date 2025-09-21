@class NSData;

@interface STSchemaSTHallucinationDetectionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char hallucinationDetectionSource : 1; } _has;
}

@property (nonatomic) int hallucinationDetectionSource;
@property (nonatomic) char hasHallucinationDetectionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHallucinationDetectionSource;
- (id)suppressMessageUnderConditions;

@end
