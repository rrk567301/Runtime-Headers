@class NSData, RGSiriSchemaRGError;

@interface RGSiriSchemaRGInferenceFailed : SISchemaInstrumentationMessage {
    struct { unsigned char fatalError : 1; } _has;
}

@property (nonatomic) int fatalError;
@property (nonatomic) BOOL hasFatalError;
@property (retain, nonatomic) RGSiriSchemaRGError *error;
@property (nonatomic) BOOL hasError;
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
- (void)deleteError;
- (void)deleteFatalError;

@end
