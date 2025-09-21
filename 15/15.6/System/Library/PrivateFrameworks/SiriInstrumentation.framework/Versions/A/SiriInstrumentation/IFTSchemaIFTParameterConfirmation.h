@class NSString, NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTParameterConfirmation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char parameterIndex : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (copy, nonatomic) NSString *parameterId;
@property (nonatomic) char hasParameterId;
@property (nonatomic) long long parameterIndex;
@property (nonatomic) char hasParameterIndex;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *item;
@property (nonatomic) char hasItem;
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
- (void)deleteExists;
- (void)deleteItem;
- (void)deleteParameterId;
- (void)deleteParameterIndex;
- (id)suppressMessageUnderConditions;

@end
