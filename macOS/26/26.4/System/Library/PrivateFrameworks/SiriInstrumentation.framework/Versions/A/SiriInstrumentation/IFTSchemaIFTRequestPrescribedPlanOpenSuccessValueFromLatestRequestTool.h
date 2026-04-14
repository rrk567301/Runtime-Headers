@class NSData;

@interface IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool : SISchemaInstrumentationMessage {
    struct { unsigned char elementAtIndex : 1; } _has;
}

@property (nonatomic) long long elementAtIndex;
@property (nonatomic) BOOL hasElementAtIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteElementAtIndex;

@end
