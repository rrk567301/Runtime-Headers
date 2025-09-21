@class NSString, NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTParameterNotAllowed : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (copy, nonatomic) NSString *parameterId;
@property (nonatomic) char hasParameterId;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *value;
@property (nonatomic) char hasValue;
@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExists;
- (void)deleteParameterId;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
