@class NSData;

@interface IFTSchemaIFTRequestPrescribedPlanKnowledgeTool : SISchemaInstrumentationMessage {
    struct { unsigned char isExplicit : 1; } _has;
}

@property (nonatomic) char isExplicit;
@property (nonatomic) char hasIsExplicit;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsExplicit;
- (id)suppressMessageUnderConditions;

@end
