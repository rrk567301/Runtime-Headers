@class NSData;

@interface IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool : SISchemaInstrumentationMessage {
    struct { unsigned char elementAtIndex : 1; } _has;
}

@property (nonatomic) long long elementAtIndex;
@property (nonatomic) BOOL hasElementAtIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteElementAtIndex;

@end
