@class NSData;

@interface IFTSchemaIFTSystemPromptResolutionRequirementResolution : SISchemaInstrumentationMessage {
    struct { unsigned char isRequirementSatisfied : 1; } _has;
}

@property (nonatomic) BOOL isRequirementSatisfied;
@property (nonatomic) BOOL hasIsRequirementSatisfied;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsRequirementSatisfied;

@end
