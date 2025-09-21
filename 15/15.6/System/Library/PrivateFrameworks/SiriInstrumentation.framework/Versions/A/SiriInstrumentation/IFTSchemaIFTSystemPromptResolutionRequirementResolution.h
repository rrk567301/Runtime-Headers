@class NSData;

@interface IFTSchemaIFTSystemPromptResolutionRequirementResolution : SISchemaInstrumentationMessage {
    struct { unsigned char isRequirementSatisfied : 1; } _has;
}

@property (nonatomic) char isRequirementSatisfied;
@property (nonatomic) char hasIsRequirementSatisfied;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsRequirementSatisfied;
- (id)suppressMessageUnderConditions;

@end
