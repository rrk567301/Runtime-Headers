@class NSString, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSMediaGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char groundTruthSource : 1; unsigned char selectedMediaEntitylocality : 1; unsigned char inferredMediaEntitylocality : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) char hasGroundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) char hasGroundTruthSource;
@property (copy, nonatomic) NSString *selectedMediaEntityAdamId;
@property (nonatomic) char hasSelectedMediaEntityAdamId;
@property (copy, nonatomic) NSString *inferredMediaEntityAdamId;
@property (nonatomic) char hasInferredMediaEntityAdamId;
@property (nonatomic) int selectedMediaEntitylocality;
@property (nonatomic) char hasSelectedMediaEntitylocality;
@property (nonatomic) int inferredMediaEntitylocality;
@property (nonatomic) char hasInferredMediaEntitylocality;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInferredMediaEntityAdamId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSelectedMediaEntityAdamId;
- (void)deleteGroundTruthId;
- (void)deleteGroundTruthSource;
- (void)deleteInferredMediaEntitylocality;
- (void)deleteSelectedMediaEntitylocality;
- (id)suppressMessageUnderConditions;

@end
