@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTUpdateParameter : SISchemaInstrumentationMessage {
    struct { unsigned char kind : 1; unsigned char parameterIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *parameterId;
@property (nonatomic) BOOL hasParameterId;
@property (nonatomic) int kind;
@property (nonatomic) BOOL hasKind;
@property (retain, nonatomic) IFTSchemaIFTStatementId *value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) long long parameterIndex;
@property (nonatomic) BOOL hasParameterIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteKind;
- (void)deleteParameterId;
- (void)deleteParameterIndex;
- (void)deleteValue;

@end
