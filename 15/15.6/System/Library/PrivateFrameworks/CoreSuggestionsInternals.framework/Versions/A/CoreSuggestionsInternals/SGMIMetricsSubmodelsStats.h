@class SGMIMetricsSubmodelStats;

@interface SGMIMetricsSubmodelsStats : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPersonFromSenderStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personFromSenderStats;
@property (readonly, nonatomic) char hasPersonFromSenderInDyadicConversationStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personFromSenderInDyadicConversationStats;
@property (readonly, nonatomic) char hasSubjectContentStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *subjectContentStats;
@property (readonly, nonatomic) char hasPersonToRecipientsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personToRecipientsStats;
@property (readonly, nonatomic) char hasPersonCCRecipientsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *personCCRecipientsStats;
@property (readonly, nonatomic) char hasDomainFromSenderStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *domainFromSenderStats;
@property (readonly, nonatomic) char hasConversationStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *conversationStats;
@property (readonly, nonatomic) char hasListIdStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *listIdStats;
@property (readonly, nonatomic) char hasAttachmentsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *attachmentsStats;
@property (readonly, nonatomic) char hasSubjectCountStatsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *subjectCountStatsStats;
@property (readonly, nonatomic) char hasStandardMailRulesStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *standardMailRulesStats;
@property (readonly, nonatomic) char hasMailboxStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *mailboxStats;
@property (readonly, nonatomic) char hasMailboxTypeStats;
@property (retain, nonatomic) SGMIMetricsSubmodelStats *mailboxTypeStats;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
