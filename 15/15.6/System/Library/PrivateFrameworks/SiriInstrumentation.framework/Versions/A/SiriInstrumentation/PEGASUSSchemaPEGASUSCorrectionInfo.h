@class NSString, PEGASUSSchemaPEGASUSAlignmentOffset, NSData;

@interface PEGASUSSchemaPEGASUSCorrectionInfo : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (copy, nonatomic) NSString *original;
@property (nonatomic) char hasOriginal;
@property (copy, nonatomic) NSString *correction;
@property (nonatomic) char hasCorrection;
@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (copy, nonatomic) NSString *sourceAuxKey;
@property (nonatomic) char hasSourceAuxKey;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAlignmentOffset *alignmentOffset;
@property (nonatomic) char hasAlignmentOffset;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAlignmentOffset;
- (void)deleteCorrection;
- (void)deleteOriginal;
- (void)deleteScore;
- (void)deleteSourceAuxKey;
- (id)suppressMessageUnderConditions;

@end
