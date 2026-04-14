@class NSData;

@interface IFTSchemaIFTRequestPrescribedPlanTextTool : SISchemaInstrumentationMessage {
    struct { unsigned char isExplicit : 1; } _has;
}

@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL hasIsExplicit;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsExplicit;

@end
