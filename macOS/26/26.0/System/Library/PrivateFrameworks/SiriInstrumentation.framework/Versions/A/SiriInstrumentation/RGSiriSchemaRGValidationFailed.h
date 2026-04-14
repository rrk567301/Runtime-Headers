@class NSData, RGSiriSchemaRGError;

@interface RGSiriSchemaRGValidationFailed : SISchemaInstrumentationMessage {
    struct { unsigned char fatalError : 1; } _has;
}

@property (nonatomic) int fatalError;
@property (nonatomic) BOOL hasFatalError;
@property (retain, nonatomic) RGSiriSchemaRGError *error;
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteError;
- (void)deleteFatalError;

@end
