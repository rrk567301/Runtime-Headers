@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMResponseList : PBCodable <NSCopying> {
    struct { unsigned char responseTimePerf : 1; unsigned char generationStatus : 1; unsigned char isCached : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperiment;
@property (retain, nonatomic) PREUMTrialExperiment *experiment;
@property (readonly, nonatomic) BOOL hasMsgMetadata;
@property (retain, nonatomic) PREUMMessageMetadata *msgMetadata;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasIsCached;
@property (nonatomic) BOOL isCached;
@property (nonatomic) BOOL hasResponseTimePerf;
@property (nonatomic) unsigned long long responseTimePerf;
@property (nonatomic) BOOL hasGenerationStatus;
@property (nonatomic) int generationStatus;

+ (Class)itemsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addItems:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)itemsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)itemsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearItems;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsGenerationStatus:(id)a0;
- (id)generationStatusAsString:(int)a0;

@end
