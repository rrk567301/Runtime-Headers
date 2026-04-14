@class NSData, RGSiriSchemaRGError;

@interface RGSiriSchemaRGInferenceFailed : SISchemaInstrumentationMessage {
    struct { unsigned char fatalError : 1; } _has;
}

@property (nonatomic) int fatalError;
@property (nonatomic) BOOL hasFatalError;
@property (retain, nonatomic) RGSiriSchemaRGError *error;
@property (nonatomic) BOOL hasError;
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
- (void)deleteError;
- (void)deleteFatalError;

@end
