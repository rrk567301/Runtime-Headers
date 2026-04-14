@class NSString, NSData;

@interface MHSchemaMHCarplayLanguageMismatch : SISchemaInstrumentationMessage {
    struct { unsigned char carplayTriggerMode : 1; } _has;
}

@property (copy, nonatomic) NSString *carHeadUnitSelectedLocale;
@property (nonatomic) BOOL hasCarHeadUnitSelectedLocale;
@property (nonatomic) int carplayTriggerMode;
@property (nonatomic) BOOL hasCarplayTriggerMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteCarHeadUnitSelectedLocale;
- (void)deleteCarplayTriggerMode;

@end
