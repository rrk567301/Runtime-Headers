@class NSString, NSData;

@interface SISchemaPNRFatalErrorInfo : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorDomain;
@property (copy, nonatomic) NSString *errorCode;
@property (nonatomic) char hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (id)suppressMessageUnderConditions;

@end
