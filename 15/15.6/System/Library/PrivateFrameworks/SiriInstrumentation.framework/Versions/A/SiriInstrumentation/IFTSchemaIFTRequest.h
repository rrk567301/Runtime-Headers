@class NSData, IFTSchemaIFTRequestPrescribedPlan, IFTSchemaIFTRequestContent;

@interface IFTSchemaIFTRequest : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char isSafetyMode : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (retain, nonatomic) IFTSchemaIFTRequestContent *content;
@property (nonatomic) char hasContent;
@property (nonatomic) char isSafetyMode;
@property (nonatomic) char hasIsSafetyMode;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlan *prescribedPlan;
@property (nonatomic) char hasPrescribedPlan;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExists;
- (void)deleteIsSafetyMode;
- (void)deletePrescribedPlan;
- (id)suppressMessageUnderConditions;

@end
