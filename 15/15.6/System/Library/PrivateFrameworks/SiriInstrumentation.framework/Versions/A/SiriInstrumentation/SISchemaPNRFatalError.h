@class NSData, SISchemaPNRFatalErrorInfo;

@interface SISchemaPNRFatalError : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *error;
@property (nonatomic) char hasError;
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underlyingError;
@property (nonatomic) char hasUnderlyingError;
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underUnderlyingError;
@property (nonatomic) char hasUnderUnderlyingError;
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
- (void)deleteUnderUnderlyingError;
- (void)deleteUnderlyingError;
- (id)suppressMessageUnderConditions;

@end
