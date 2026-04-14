@class NSData, IFTSchemaIFTRequestPrescribedPlan, IFTSchemaIFTRequestContent;

@interface IFTSchemaIFTRequest : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char isSafetyMode : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTRequestContent *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL isSafetyMode;
@property (nonatomic) BOOL hasIsSafetyMode;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlan *prescribedPlan;
@property (nonatomic) BOOL hasPrescribedPlan;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContent;
- (void)deleteIsSafetyMode;
- (void)deletePrescribedPlan;

@end
