@class NSString, PEGASUSSchemaPEGASUSAlignmentOffset, NSData;

@interface PEGASUSSchemaPEGASUSCorrectionInfo : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (copy, nonatomic) NSString *original;
@property (nonatomic) BOOL hasOriginal;
@property (copy, nonatomic) NSString *correction;
@property (nonatomic) BOOL hasCorrection;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (copy, nonatomic) NSString *sourceAuxKey;
@property (nonatomic) BOOL hasSourceAuxKey;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAlignmentOffset *alignmentOffset;
@property (nonatomic) BOOL hasAlignmentOffset;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAlignmentOffset;
- (void)deleteCorrection;
- (void)deleteOriginal;
- (void)deleteScore;
- (void)deleteSourceAuxKey;

@end
