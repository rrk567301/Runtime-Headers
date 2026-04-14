@class NSString, NSData;

@interface PNRODSchemaPNRODDimension : SISchemaInstrumentationMessage {
    struct { unsigned char dimensionNameIndex : 1; unsigned char dimensionValueInteger : 1; unsigned char dimensionValueFloat : 1; unsigned char dimensionValueBoolean : 1; } _has;
}

@property (nonatomic) long long dimensionNameIndex;
@property (nonatomic) BOOL hasDimensionNameIndex;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (nonatomic) BOOL hasModelIdentifier;
@property (nonatomic) long long dimensionValueInteger;
@property (nonatomic) BOOL hasDimensionValueInteger;
@property (nonatomic) double dimensionValueFloat;
@property (nonatomic) BOOL hasDimensionValueFloat;
@property (nonatomic) BOOL dimensionValueBoolean;
@property (nonatomic) BOOL hasDimensionValueBoolean;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDimensionNameIndex;
- (void)deleteDimensionValueBoolean;
- (void)deleteDimensionValueFloat;
- (void)deleteDimensionValueInteger;
- (void)deleteModelIdentifier;
- (void)deleteToolId;

@end
