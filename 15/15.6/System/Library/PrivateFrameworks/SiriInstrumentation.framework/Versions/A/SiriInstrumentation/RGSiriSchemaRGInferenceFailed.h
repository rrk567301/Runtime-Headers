@class NSData, RGSiriSchemaRGError;

@interface RGSiriSchemaRGInferenceFailed : SISchemaInstrumentationMessage {
    struct { unsigned char fatalError : 1; } _has;
}

@property (nonatomic) int fatalError;
@property (nonatomic) char hasFatalError;
@property (retain, nonatomic) RGSiriSchemaRGError *error;
@property (nonatomic) char hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteError;
- (void)deleteFatalError;
- (id)suppressMessageUnderConditions;

@end
