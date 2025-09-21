@class NSString, NSData;

@interface USOSchemaUSOSpanPropertyTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char valueInt : 1; unsigned char valueFloat : 1; } _has;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) char hasKey;
@property (copy, nonatomic) NSString *valueString;
@property (nonatomic) char hasValueString;
@property (nonatomic) int valueInt;
@property (nonatomic) char hasValueInt;
@property (nonatomic) float valueFloat;
@property (nonatomic) char hasValueFloat;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteKey;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteValueFloat;
- (void)deleteValueInt;
- (void)deleteValueString;
- (id)suppressMessageUnderConditions;

@end
