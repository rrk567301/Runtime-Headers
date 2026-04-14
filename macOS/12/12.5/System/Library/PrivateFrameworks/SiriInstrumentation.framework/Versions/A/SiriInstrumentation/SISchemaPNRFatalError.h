@class NSData, SISchemaPNRFatalErrorInfo;

@interface SISchemaPNRFatalError : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underUnderlyingError;
@property (nonatomic) BOOL hasUnderUnderlyingError;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteError;
- (void)deleteUnderlyingError;
- (void)deleteUnderUnderlyingError;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
