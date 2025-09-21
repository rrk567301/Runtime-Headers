@class NSString, NSData;

@interface MHSchemaMHCarplayLanguageMismatch : SISchemaInstrumentationMessage {
    struct { unsigned char carplayTriggerMode : 1; } _has;
}

@property (copy, nonatomic) NSString *carHeadUnitSelectedLocale;
@property (nonatomic) char hasCarHeadUnitSelectedLocale;
@property (nonatomic) int carplayTriggerMode;
@property (nonatomic) char hasCarplayTriggerMode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarHeadUnitSelectedLocale;
- (void)deleteCarplayTriggerMode;
- (id)suppressMessageUnderConditions;

@end
