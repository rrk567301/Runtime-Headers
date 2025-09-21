@class NSData;

@interface STSchemaSTHallucinationDetectionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char hallucinationDetectionSource : 1; } _has;
}

@property (nonatomic) int hallucinationDetectionSource;
@property (nonatomic) BOOL hasHallucinationDetectionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteHallucinationDetectionSource;

@end
