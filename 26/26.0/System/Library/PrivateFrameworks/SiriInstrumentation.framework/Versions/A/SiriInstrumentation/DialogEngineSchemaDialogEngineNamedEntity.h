@class NSString, NSData;

@interface DialogEngineSchemaDialogEngineNamedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char catParameter : 1; } _has;
}

@property (nonatomic) int catParameter;
@property (nonatomic) BOOL hasCatParameter;
@property (copy, nonatomic) NSString *catParameterValue;
@property (nonatomic) BOOL hasCatParameterValue;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCatParameter;
- (void)deleteCatParameterValue;

@end
