@class NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTActionSuccess : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char appLaunched : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *returnValue;
@property (nonatomic) BOOL hasReturnValue;
@property (nonatomic) BOOL appLaunched;
@property (nonatomic) BOOL hasAppLaunched;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppLaunched;
- (void)deleteExists;
- (void)deleteReturnValue;
- (id)suppressMessageUnderConditions;

@end
