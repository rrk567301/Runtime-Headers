@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMResponseList : PBCodable <NSCopying> {
    struct { unsigned char responseTimePerf : 1; unsigned char generationStatus : 1; unsigned char isCached : 1; } _has;
}

@property (readonly, nonatomic) char hasExperiment;
@property (retain, nonatomic) PREUMTrialExperiment *experiment;
@property (readonly, nonatomic) char hasMsgMetadata;
@property (retain, nonatomic) PREUMMessageMetadata *msgMetadata;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) char hasIsCached;
@property (nonatomic) char isCached;
@property (nonatomic) char hasResponseTimePerf;
@property (nonatomic) unsigned long long responseTimePerf;
@property (nonatomic) char hasGenerationStatus;
@property (nonatomic) int generationStatus;

+ (Class)itemsType;

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
- (void)addItems:(id)a0;
- (unsigned long long)itemsCount;
- (int)StringAsGenerationStatus:(id)a0;
- (void)clearItems;
- (id)generationStatusAsString:(int)a0;
- (id)itemsAtIndex:(unsigned long long)a0;

@end
