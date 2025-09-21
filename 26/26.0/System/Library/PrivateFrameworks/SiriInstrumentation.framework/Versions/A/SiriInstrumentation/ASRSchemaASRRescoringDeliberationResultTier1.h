@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRRescoringDeliberationResultTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *originalTranscript;
@property (nonatomic) BOOL hasOriginalTranscript;
@property (copy, nonatomic) NSString *modifiedTranscript;
@property (nonatomic) BOOL hasModifiedTranscript;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteLinkId;
- (void)deleteModifiedTranscript;
- (void)deleteOriginalTranscript;

@end
