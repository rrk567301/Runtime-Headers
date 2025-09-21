@class NSMutableArray, AWDWASymptomsDnsStats, AWDWAPeerDiscoveryInfo, AWDWAQuickDpsStats, AWDWADiagnosisActionAssociationDifferences;

@interface AWDWiFiDPSEpilogue : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char action : 1; unsigned char actionIntVal : 1; unsigned char afterRecommendedAction : 1; unsigned char beforeAction : 1; unsigned char studyType : 1; unsigned char isAssociatedAtStudyEnd : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasBeforeAction;
@property (nonatomic) int beforeAction;
@property (nonatomic) char hasAction;
@property (nonatomic) int action;
@property (nonatomic) char hasAfterRecommendedAction;
@property (nonatomic) int afterRecommendedAction;
@property (readonly, nonatomic) char hasChanges;
@property (retain, nonatomic) AWDWADiagnosisActionAssociationDifferences *changes;
@property (retain, nonatomic) NSMutableArray *associationChanges;
@property (readonly, nonatomic) char hasQDpsStats;
@property (retain, nonatomic) AWDWAQuickDpsStats *qDpsStats;
@property (nonatomic) char hasActionIntVal;
@property (nonatomic) unsigned int actionIntVal;
@property (nonatomic) char hasStudyType;
@property (nonatomic) int studyType;
@property (nonatomic) char hasIsAssociatedAtStudyEnd;
@property (nonatomic) char isAssociatedAtStudyEnd;
@property (readonly, nonatomic) char hasSymptomsDnsStats;
@property (retain, nonatomic) AWDWASymptomsDnsStats *symptomsDnsStats;
@property (readonly, nonatomic) char hasDiscoveredPeerInfo;
@property (retain, nonatomic) AWDWAPeerDiscoveryInfo *discoveredPeerInfo;
@property (retain, nonatomic) NSMutableArray *accessPointInfos;

+ (Class)accessPointInfoType;
+ (Class)associationChangesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)actionAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsAction:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)afterRecommendedActionAsString:(int)a0;
- (int)StringAsAfterRecommendedAction:(id)a0;
- (int)StringAsBeforeAction:(id)a0;
- (int)StringAsStudyType:(id)a0;
- (id)accessPointInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)accessPointInfosCount;
- (void)addAccessPointInfo:(id)a0;
- (void)addAssociationChanges:(id)a0;
- (id)associationChangesAtIndex:(unsigned long long)a0;
- (unsigned long long)associationChangesCount;
- (id)beforeActionAsString:(int)a0;
- (void)clearAccessPointInfos;
- (void)clearAssociationChanges;
- (id)studyTypeAsString:(int)a0;

@end
