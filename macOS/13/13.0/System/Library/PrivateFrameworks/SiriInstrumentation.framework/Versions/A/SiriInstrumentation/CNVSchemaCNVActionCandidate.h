@class NSData, CNVSchemaCNVLinkMetadata, SISchemaUUID;

@interface CNVSchemaCNVActionCandidate : SISchemaInstrumentationMessage {
    struct { unsigned char plugin : 1; unsigned char affinityScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) BOOL hasActionCandidateId;
@property (nonatomic) int plugin;
@property (nonatomic) BOOL hasPlugin;
@property (retain, nonatomic) SISchemaUUID *parseHypothesisId;
@property (nonatomic) BOOL hasParseHypothesisId;
@property (retain, nonatomic) SISchemaUUID *pommesId;
@property (nonatomic) BOOL hasPommesId;
@property (nonatomic) unsigned int affinityScore;
@property (nonatomic) BOOL hasAffinityScore;
@property (retain, nonatomic) CNVSchemaCNVLinkMetadata *linkMetadata;
@property (nonatomic) BOOL hasLinkMetadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichParseid;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionCandidateId;
- (void)deletePlugin;
- (void)deleteParseHypothesisId;
- (void)deletePommesId;
- (void)deleteAffinityScore;
- (void)deleteLinkMetadata;

@end
