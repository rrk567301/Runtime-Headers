@class NSData, SISchemaPNRFatalErrorInfo;

@interface SISchemaPNRFatalError : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underUnderlyingError;
@property (nonatomic) BOOL hasUnderUnderlyingError;
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
- (void)deleteUnderUnderlyingError;
- (void)deleteUnderlyingError;

@end
