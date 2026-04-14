@class NSString, NSData;

@interface RFSchemaRFGVisualResponseShownTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *responseModel;
@property (nonatomic) BOOL hasResponseModel;
@property (copy, nonatomic) NSString *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePatternId;
- (void)deleteResponseModel;

@end
