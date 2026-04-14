@class NSData;

@interface STSchemaSTHallucinationDetectionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char hallucinationDetectionSource : 1; } _has;
}

@property (nonatomic) int hallucinationDetectionSource;
@property (nonatomic) BOOL hasHallucinationDetectionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHallucinationDetectionSource;

@end
