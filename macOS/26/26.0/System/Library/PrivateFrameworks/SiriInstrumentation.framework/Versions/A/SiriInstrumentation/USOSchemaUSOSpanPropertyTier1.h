@class NSString, NSData;

@interface USOSchemaUSOSpanPropertyTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char valueInt : 1; unsigned char valueFloat : 1; } _has;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (copy, nonatomic) NSString *valueString;
@property (nonatomic) BOOL hasValueString;
@property (nonatomic) int valueInt;
@property (nonatomic) BOOL hasValueInt;
@property (nonatomic) float valueFloat;
@property (nonatomic) BOOL hasValueFloat;
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
- (void)deleteKey;
- (void)deleteValueFloat;
- (void)deleteValueInt;
- (void)deleteValueString;

@end
