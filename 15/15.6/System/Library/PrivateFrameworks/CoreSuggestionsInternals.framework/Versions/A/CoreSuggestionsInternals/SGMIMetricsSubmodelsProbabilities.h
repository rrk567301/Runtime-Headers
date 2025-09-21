@interface SGMIMetricsSubmodelsProbabilities : PBCodable <NSCopying> {
    struct { unsigned char attachmentsProbability : 1; unsigned char conversationProbability : 1; unsigned char domainFromSenderProbability : 1; unsigned char listIdProbability : 1; unsigned char mailboxProbability : 1; unsigned char mailboxTypeProbability : 1; unsigned char personCCRecipientsProbability : 1; unsigned char personFromSenderInDyadicConversationProbability : 1; unsigned char personFromSenderProbability : 1; unsigned char personToRecipientsProbability : 1; unsigned char standardMailRulesProbability : 1; unsigned char subjectContentProbability : 1; unsigned char subjectCountStatsProbability : 1; } _has;
}

@property (nonatomic) char hasPersonFromSenderProbability;
@property (nonatomic) float personFromSenderProbability;
@property (nonatomic) char hasPersonFromSenderInDyadicConversationProbability;
@property (nonatomic) float personFromSenderInDyadicConversationProbability;
@property (nonatomic) char hasSubjectContentProbability;
@property (nonatomic) float subjectContentProbability;
@property (nonatomic) char hasPersonToRecipientsProbability;
@property (nonatomic) float personToRecipientsProbability;
@property (nonatomic) char hasPersonCCRecipientsProbability;
@property (nonatomic) float personCCRecipientsProbability;
@property (nonatomic) char hasDomainFromSenderProbability;
@property (nonatomic) float domainFromSenderProbability;
@property (nonatomic) char hasConversationProbability;
@property (nonatomic) float conversationProbability;
@property (nonatomic) char hasListIdProbability;
@property (nonatomic) float listIdProbability;
@property (nonatomic) char hasAttachmentsProbability;
@property (nonatomic) float attachmentsProbability;
@property (nonatomic) char hasSubjectCountStatsProbability;
@property (nonatomic) float subjectCountStatsProbability;
@property (nonatomic) char hasStandardMailRulesProbability;
@property (nonatomic) float standardMailRulesProbability;
@property (nonatomic) char hasMailboxProbability;
@property (nonatomic) float mailboxProbability;
@property (nonatomic) char hasMailboxTypeProbability;
@property (nonatomic) float mailboxTypeProbability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
