@class NSString, NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTParameterConfirmation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char parameterIndex : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *parameterId;
@property (nonatomic) BOOL hasParameterId;
@property (nonatomic) long long parameterIndex;
@property (nonatomic) BOOL hasParameterIndex;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *item;
@property (nonatomic) BOOL hasItem;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteItem;
- (void)deleteParameterId;
- (void)deleteParameterIndex;

@end
