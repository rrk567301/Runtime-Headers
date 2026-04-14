@class NSString, NSData;

@interface DialogEngineSchemaDialogEngineNamedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char catParameter : 1; } _has;
}

@property (nonatomic) int catParameter;
@property (nonatomic) BOOL hasCatParameter;
@property (copy, nonatomic) NSString *catParameterValue;
@property (nonatomic) BOOL hasCatParameterValue;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCatParameter;
- (void)deleteCatParameterValue;

@end
