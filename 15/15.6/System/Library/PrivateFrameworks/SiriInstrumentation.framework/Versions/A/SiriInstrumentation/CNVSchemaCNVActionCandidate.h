@class NSData, CNVSchemaCNVLinkMetadata, SISchemaUUID;

@interface CNVSchemaCNVActionCandidate : SISchemaInstrumentationMessage {
    struct { unsigned char plugin : 1; unsigned char affinityScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) char hasActionCandidateId;
@property (nonatomic) int plugin;
@property (nonatomic) char hasPlugin;
@property (retain, nonatomic) SISchemaUUID *parseHypothesisId;
@property (nonatomic) char hasParseHypothesisId;
@property (retain, nonatomic) SISchemaUUID *pommesId;
@property (nonatomic) char hasPommesId;
@property (nonatomic) unsigned int affinityScore;
@property (nonatomic) char hasAffinityScore;
@property (retain, nonatomic) CNVSchemaCNVLinkMetadata *linkMetadata;
@property (nonatomic) char hasLinkMetadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichParseid;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionCandidateId;
- (void)deleteAffinityScore;
- (void)deleteLinkMetadata;
- (void)deleteParseHypothesisId;
- (void)deletePlugin;
- (void)deletePommesId;
- (id)suppressMessageUnderConditions;

@end
