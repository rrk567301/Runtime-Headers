@class NSData, SISchemaUUID;

@interface CAARSchemaCAARActionFeatureSet : SISchemaInstrumentationMessage {
    struct { unsigned char isHighConfidence : 1; unsigned char isAppInForeground : 1; unsigned char appNameMentioned : 1; unsigned char isTopRankedPlugin : 1; unsigned char entityTypeMentioned : 1; unsigned char isColdOpenAllowlist : 1; unsigned char isLinkActionOnScreen : 1; unsigned char isDefaultLinkAction : 1; unsigned char isVocabNameMatch : 1; unsigned char isLinkAction : 1; unsigned char isAutoshortcut : 1; unsigned char isAutoshortcutAppOnScreen : 1; unsigned char entitySaliencyMaxScore : 1; unsigned char numSalientEntities : 1; unsigned char nlParseProbability : 1; unsigned char isTopRankedParse : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionCandidateId;
@property (nonatomic) BOOL hasActionCandidateId;
@property (nonatomic) BOOL isHighConfidence;
@property (nonatomic) BOOL hasIsHighConfidence;
@property (nonatomic) BOOL isAppInForeground;
@property (nonatomic) BOOL hasIsAppInForeground;
@property (nonatomic) BOOL appNameMentioned;
@property (nonatomic) BOOL hasAppNameMentioned;
@property (nonatomic) BOOL isTopRankedPlugin;
@property (nonatomic) BOOL hasIsTopRankedPlugin;
@property (nonatomic) BOOL entityTypeMentioned;
@property (nonatomic) BOOL hasEntityTypeMentioned;
@property (nonatomic) BOOL isColdOpenAllowlist;
@property (nonatomic) BOOL hasIsColdOpenAllowlist;
@property (nonatomic) BOOL isLinkActionOnScreen;
@property (nonatomic) BOOL hasIsLinkActionOnScreen;
@property (nonatomic) BOOL isDefaultLinkAction;
@property (nonatomic) BOOL hasIsDefaultLinkAction;
@property (nonatomic) BOOL isVocabNameMatch;
@property (nonatomic) BOOL hasIsVocabNameMatch;
@property (nonatomic) BOOL isLinkAction;
@property (nonatomic) BOOL hasIsLinkAction;
@property (nonatomic) BOOL isAutoshortcut;
@property (nonatomic) BOOL hasIsAutoshortcut;
@property (nonatomic) BOOL isAutoshortcutAppOnScreen;
@property (nonatomic) BOOL hasIsAutoshortcutAppOnScreen;
@property (nonatomic) unsigned int entitySaliencyMaxScore;
@property (nonatomic) BOOL hasEntitySaliencyMaxScore;
@property (nonatomic) unsigned int numSalientEntities;
@property (nonatomic) BOOL hasNumSalientEntities;
@property (nonatomic) float nlParseProbability;
@property (nonatomic) BOOL hasNlParseProbability;
@property (nonatomic) BOOL isTopRankedParse;
@property (nonatomic) BOOL hasIsTopRankedParse;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteIsHighConfidence;
- (void)deleteIsAppInForeground;
- (void)deleteAppNameMentioned;
- (void)deleteIsTopRankedPlugin;
- (void)deleteEntityTypeMentioned;
- (void)deleteIsColdOpenAllowlist;
- (void)deleteIsLinkActionOnScreen;
- (void)deleteIsDefaultLinkAction;
- (void)deleteIsVocabNameMatch;
- (void)deleteIsLinkAction;
- (void)deleteIsAutoshortcut;
- (void)deleteIsAutoshortcutAppOnScreen;
- (void)deleteEntitySaliencyMaxScore;
- (void)deleteNumSalientEntities;
- (void)deleteNlParseProbability;
- (void)deleteIsTopRankedParse;

@end
