@class NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicCohorts;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts;
@property (retain, nonatomic) NSMutableArray *topicCohortScores;

+ (Class)topicCohortScoresType;
+ (Class)topicCohortsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)topicCohortScoresCount;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearTopicCohorts;
- (id)topicCohortScoresAtIndex:(unsigned long long)a0;
- (void)addTopicCohortScores:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)topicCohortsCount;
- (unsigned long long)hash;
- (void)clearTopicCohortScores;
- (void)addTopicCohorts:(id)a0;
- (id)topicCohortsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
