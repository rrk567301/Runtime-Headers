@class IFTSchemaIFTActionConfirmationSystemStyleGenerativeAIEnablement, NSData;

@interface IFTSchemaIFTActionConfirmationSystemStyle : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTActionConfirmationSystemStyleGenerativeAIEnablement *generativeAIEnablement;
@property (nonatomic) char hasGenerativeAIEnablement;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Actionconfirmationsystemstyle;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteGenerativeAIEnablement;
- (id)suppressMessageUnderConditions;

@end
