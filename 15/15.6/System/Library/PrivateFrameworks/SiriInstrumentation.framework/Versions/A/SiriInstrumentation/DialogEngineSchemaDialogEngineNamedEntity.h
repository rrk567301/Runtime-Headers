@class NSString, NSData;

@interface DialogEngineSchemaDialogEngineNamedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char catParameter : 1; } _has;
}

@property (nonatomic) int catParameter;
@property (nonatomic) char hasCatParameter;
@property (copy, nonatomic) NSString *catParameterValue;
@property (nonatomic) char hasCatParameterValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCatParameter;
- (void)deleteCatParameterValue;
- (id)suppressMessageUnderConditions;

@end
