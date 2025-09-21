@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTUpdateParameter : SISchemaInstrumentationMessage {
    struct { unsigned char kind : 1; unsigned char parameterIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *parameterId;
@property (nonatomic) char hasParameterId;
@property (nonatomic) int kind;
@property (nonatomic) char hasKind;
@property (retain, nonatomic) IFTSchemaIFTStatementId *value;
@property (nonatomic) char hasValue;
@property (nonatomic) long long parameterIndex;
@property (nonatomic) char hasParameterIndex;
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
- (void)deleteKind;
- (void)deleteParameterId;
- (void)deleteParameterIndex;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
