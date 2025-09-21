@class NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicCohorts;
@property (readonly, nonatomic) char hasGlobalCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) char hasSourceChannelCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts;
@property (retain, nonatomic) NSMutableArray *topicCohortScores;

+ (Class)topicCohortScoresType;
+ (Class)topicCohortsType;

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
- (void)addTopicCohortScores:(id)a0;
- (void)addTopicCohorts:(id)a0;
- (void)clearTopicCohortScores;
- (void)clearTopicCohorts;
- (id)topicCohortScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)topicCohortScoresCount;
- (id)topicCohortsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicCohortsCount;

@end
