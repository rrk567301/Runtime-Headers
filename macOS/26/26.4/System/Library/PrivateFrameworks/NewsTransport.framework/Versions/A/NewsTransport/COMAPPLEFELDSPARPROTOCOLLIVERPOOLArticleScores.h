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

- (void)clearTopicCohortScores;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearTopicCohorts;
- (void)addTopicCohortScores:(id)a0;
- (void).cxx_destruct;
- (id)topicCohortsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addTopicCohorts:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (id)topicCohortScoresAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)topicCohortsCount;
- (unsigned long long)topicCohortScoresCount;

@end
