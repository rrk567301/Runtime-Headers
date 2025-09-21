@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMEngagedResponseList : PBCodable <NSCopying> {
    struct { unsigned char timeToTap : 1; unsigned char engagedItem : 1; unsigned char generationStatus : 1; unsigned char inputMethod : 1; } _has;
}

@property (readonly, nonatomic) char hasExperiment;
@property (retain, nonatomic) PREUMTrialExperiment *experiment;
@property (readonly, nonatomic) char hasMsgMetadata;
@property (retain, nonatomic) PREUMMessageMetadata *msgMetadata;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) char hasEngagedItem;
@property (nonatomic) unsigned int engagedItem;
@property (nonatomic) char hasTimeToTap;
@property (nonatomic) unsigned long long timeToTap;
@property (nonatomic) char hasInputMethod;
@property (nonatomic) int inputMethod;
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
- (int)StringAsInputMethod:(id)a0;
- (int)StringAsGenerationStatus:(id)a0;
- (void)clearItems;
- (id)generationStatusAsString:(int)a0;
- (id)inputMethodAsString:(int)a0;
- (id)itemsAtIndex:(unsigned long long)a0;

@end
