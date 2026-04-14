@class NSData;

@interface IFTSchemaIFTRequestPrescribedPlanTextTool : SISchemaInstrumentationMessage {
    struct { unsigned char isExplicit : 1; } _has;
}

@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL hasIsExplicit;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsExplicit;

@end
